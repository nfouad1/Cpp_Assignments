// Copyright [2022] Team Ramones

#include <iostream>
#include <cstring>
#include <condition_variable>
#include <thread>
#include <chrono>
#include "socketcan.hpp"
#include "engine_gearbox.hpp"

 void TransmitVcanDataToAndFromEngine(scpp::SocketCan &, scpp::SocketCan &, Engine &);
static int ReadVCan(scpp::SocketCan &);
static void WriteVCan(scpp::SocketCan &, Engine &);

std::condition_variable cv; 
std::mutex cv_mutex;
bool vcan_read_completed = false;
bool engine_completed = false;

    uint8_t frame_id = 124;
    GearboxState gearbox_state;
    bool engine_started;
    uint8_t vehicle_speed;
    uint engine_speed;
    uint8_t gear_lever;
    Engine engine;

int main() {
  
    // Engine engine (EngineState::Init);
    // vcan0 will be used to read can messages from the input handler
    scpp::SocketCan sockat_can;
    if (sockat_can.open("vcan0") != scpp::STATUS_OK) {
        std::cout << "Cannot open vcan0." << std::endl;
        std::cout << "Check whether the vcan0 interface is up!" << std::endl;
        exit(-1);
    }
    // vcan1 will be used to send can messages to the user interface
    scpp::SocketCan write_sockat_can;
    if (write_sockat_can.open("vcan1") != scpp::STATUS_OK) {
        std::cout << "Cannot open vcan1." << std::endl;
        std::cout << "Check whether the vcan1 interface is up!" << std::endl;
        exit(-1);
    }
    
    std::thread t1(std::ref(TransmitVcanDataToAndFromEngine), std::ref(sockat_can), std::ref(write_sockat_can), std::ref(engine));
    //std::thread t1(ReadVCan, std::ref(sockat_can));


    while (true) {
        {
            std::unique_lock<std::mutex> lk(cv_mutex); 
            std::cout << "wait until vcan read is completed" <<"\n";
            cv.wait(lk, []{return vcan_read_completed == true;});

            switch (engine.GetEngineState()) {
            case EngineState::Init:
                engine.EngineInitState();
                engine.EngineTransitionFromInitState();

                break;
            case EngineState::Starting:
                engine.EngineStartingState();
            //    std::cout<< "Current Engine state Starting! \n";
                engine.EngineTransitionFromStartingState();
            break;
            case EngineState::Running:
                engine.EngineRunningState();
                engine.EngineTransitionFromRunningState();

                break;
            case EngineState::AfterRun:
                engine.EngineAfterRunState();
                engine.EngineTransitionFromAfterRunState();

                break;
            
            default:
                break;
            
            }
            vcan_read_completed = false; 
            engine_completed = true;
        }
        cv.notify_all();
        
    }
    
        t1.detach();

    return 0;
}

 void TransmitVcanDataToAndFromEngine(scpp::SocketCan &sockat_can, scpp::SocketCan &write_sockat_can, Engine &engine) {
    
    while (true)
    {
        {

            std::lock_guard<std::mutex> lk(cv_mutex);
            uint vcan_received_data = ReadVCan(sockat_can);
            // std::cout << vcan_received_data <<"\n";
            engine.FillEngineInternalData(vcan_received_data);
            vcan_read_completed = true; 
        }
        cv.notify_all();
        
        {
            std::unique_lock<std::mutex> lk(cv_mutex); 
            std::cout << "wait until engine provides output" <<"\n";
            cv.wait(lk, []{return engine_completed == true;});
            WriteVCan(write_sockat_can, engine);
            engine_completed = false;
        }
        
    }
    
}

static int ReadVCan(scpp::SocketCan &sockat_can) {
    uint received_data = 0;
    const uint8_t bits_in_byte = 8;
    scpp::CanFrame fr;
    if (sockat_can.read(fr) == scpp::STATUS_OK) {
        /*printf("len %d byte, id: %d, data: %02x %02x %02x %02x  \n", fr.len, fr.id,
            fr.data[0], fr.data[1], fr.data[2], fr.data[3]);*/

        received_data =
        (fr.data[0] << (3*bits_in_byte)) + (fr.data[1] << (2*bits_in_byte)) +
        (fr.data[2] << (1*bits_in_byte)) + fr.data[3];
        std::cout << received_data <<"\n";
    } else {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    return received_data;
}

static void WriteVCan(scpp::SocketCan &write_sockat_can, Engine &engine) {
   std::cout<<"engine speed before processing: \n";
   printf("engine speed before processing xxxx %u\n", (unsigned int) engine_speed);


    engine.GetDataToBeSentToInterface(std::ref(gearbox_state), std::ref(engine_started), std::ref(vehicle_speed), std::ref(engine_speed), std::ref(gear_lever));



    scpp::CanFrame can_frame;
    can_frame.id = frame_id;
    can_frame.len = 8;

   std::cout<<"engine speed to be sent out: \n";
   
   printf("engine speed 12345 %u\n", (unsigned int) engine_speed);
    switch (gearbox_state) {
        case GearboxState::Park:
            can_frame.data[0] = 0x00;
            break;
        case GearboxState::Reverse:
            can_frame.data[0] = 0x02;
            break;
        case GearboxState::Neutral:
            can_frame.data[0] = 0x01;
            break;
        case GearboxState::Drive:
            can_frame.data[0] = 0x03;
            break;
    }

    if (engine_started)
        can_frame.data[1] = 0x01;
    else
        can_frame.data[1] = 0x00;
   
    uint8_t x1=static_cast<uint8_t>(engine_speed >> 24);

    uint8_t x2=static_cast<uint8_t>((engine_speed << 8) >> 24);

    uint8_t x3=static_cast<uint8_t>((engine_speed << 16) >> 24);

    uint8_t x4=static_cast<uint8_t>((engine_speed << 24) >> 24);



        std::cout << " x1: :" << x1<< "\n";
        std::cout << " x2 :" << x2<< "\n";

    can_frame.data[2] = vehicle_speed;
    can_frame.data[3] = x1;
    can_frame.data[4] = x2;
    can_frame.data[5] = x3;
    can_frame.data[6] = x4;

    can_frame.data[7] = gear_lever;

        std::cout << " can_frame.data[3] :" << can_frame.data[3] << "\n";
        std::cout << " can_frame.data[4] :" << can_frame.data[4] << "\n";
        std::cout << " can_frame.data[5] - gearlever :" << can_frame.data[5] << "\n";
    auto write_sc_status = write_sockat_can.write(can_frame);
    if (write_sc_status != scpp::STATUS_OK) {
        std::cout << "something went wrong on socket write, error code :" << int32_t(write_sc_status) << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

}
