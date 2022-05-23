//#include <chrono>
#include <thread>
#include <iostream>
#include "your_stuff.h"
#include <cstring>
//#include "canio/can_common.h"

void yourStuff::YouHaveJustRecievedACANFrame(const canfd_frame * const _frame) {
    
    uint8_t gearbox_state=0;
    uint8_t engine_started=0;
    uint8_t vehicle_speed=0;
    uint engine_speed=0;
    uint x1=0;
    uint x2=0;
    uint x3=0;
    uint x4=0;
    uint8_t gear_lever=0;

  //  struct _icons  p;
  
    bool once = false;

    gearbox_state = _frame->data[0];

    engine_started = _frame->data[1];
    
    vehicle_speed =(uint8_t) _frame->data[2];
    std::cout <<"vehicle_speed"<< vehicle_speed <<"\n";

    x1 = static_cast<uint>((_frame->data[3])<<24); 
    x2 = static_cast<uint>((_frame->data[4])<<16);
    x3 = static_cast<uint>((_frame->data[5])<<8);
    x4 = static_cast<uint>(_frame->data[6]);
    engine_speed = x1 + x2 + x3 + x4;
    std::cout <<"engine_speed in yourStuff: "<< engine_speed <<"\n";

    gear_lever= _frame->data[7];

        std::cout << " can_frame.data[3] :" << (uint8_t)_frame->data[3] << "\n";
        std::cout << " can_frame.data[4] :" <<(uint8_t)_frame->data[4] << "\n";

    QString txt;
    txt = "\t\t TEAM RAMON\n\t\t -----------------------\n\t\t Noureldin Fouad\n\t\t Per Ternström\n\t\t Stina Karnlind\n\t\t Taycir Louati";
    this->InstrumentCluster.setTXT(txt);

    _icons p{};
  

     this->InstrumentCluster.setIcon(&p);

     if(engine_started)
     {
         std::cout<<"true if\n";

         this->InstrumentCluster.setFuelGauges(200);
         this->InstrumentCluster.setTemperatureGauges(100);
         this->InstrumentCluster.setOilTemperatureGauges(100);


         this->InstrumentCluster.ignite(engine_started);
        
        
         this->InstrumentCluster.setGearPindle_int(gearbox_state);

        this->InstrumentCluster.setGear(gear_lever);
        this->InstrumentCluster.setRPM(engine_speed);
        this->InstrumentCluster.setSpeed(vehicle_speed);

        
     }
     else 
     {
         std::cout<<"false if\n";
         this->InstrumentCluster.setFuelGauges(0);
         this->InstrumentCluster.setTemperatureGauges(0);
         this->InstrumentCluster.setOilTemperatureGauges(0);
         this->InstrumentCluster.setGear(0);
         this->InstrumentCluster.setRPM(0);
         this->InstrumentCluster.setSpeed(0);
         this->InstrumentCluster.ignite(engine_started);

     }

}

/******************************* ANYTHING BELOW THIS LINE IS JUST BORING STUFF *******************************/

yourStuff::yourStuff(const std::string &_ifName, QObject *_vs) {
    if(!(this->CANReader.open(_ifName))) exit(-1);//emit die();

    this->InstrumentCluster.init(_vs);

    this->startTimer(1);
}

bool yourStuff::run() {
    bool ret = true;
    CANOpener::ReadStatus status = CANOpener::ReadStatus::OK;
    canfd_frame frame;
    status  = this->CANReader.read(&frame);
    /*while*/if (status == CANOpener::ReadStatus::OK) {
        this->YouHaveJustRecievedACANFrame(&frame);
    }
    if (status == CANOpener::ReadStatus::ERROR) ret = false;
    else if (status == CANOpener::ReadStatus::NAVAL ||
             status == CANOpener::ReadStatus::ENDOF) this->Counter++;
    else   this->Counter = 0;
    //if (this->Counter > 200) ret = false;
    return ret;
}

void yourStuff::timerEvent(QTimerEvent*) {
    if(this->run());
    else {
//    emit this->die();
        exit(-1);
    }

}

