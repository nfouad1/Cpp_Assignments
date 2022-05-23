
// Copyright [2022] Team Ramones

#include <iostream>
#include <unistd.h>  //NOLINT
#include "engine_gearbox.hpp"  //NOLINT
#include <chrono>
#include <cstring>
#include <thread>

 float rpm_damper = 1;


Engine::Engine() {
    engine_state = EngineState::Init;
}

void Engine::EngineTransitionFromInitState() {
    // Check boolean variable from engine class engine_started and if true set engine status to starting

    if (engine_started) {
        std::cout << "Transition from Init" <<"\n";
     //   std::this_thread::sleep_for(std::chrono::milliseconds(100)); 
        engine_state = EngineState::Starting;
    }
}

void Engine::EngineTransitionFromStartingState()
{
    if (engine_speed >= idle_speed){
    std::cout <<"Transition to engine state Running!"<< "\n";
    engine_state = EngineState::Running;
    }
}

void Engine::EngineTransitionFromRunningState() {
    if (engine_started != true)
        engine_state = EngineState::AfterRun;
}

void Engine::EngineTransitionFromAfterRunState() {
    std::cout <<"Transition from afterun to init within a certain time \n";
   // std::this_thread::sleep_for(std::chrono::milliseconds(200)); 
    gearbox.SetGearboxState(GearboxState::Park);
    engine_state = EngineState::Init;
}

void Engine::EngineInitState()
{
    
    const uint8_t nullspeed = 0;
    vehicle_speed = nullspeed;
    engine_speed = nullspeed;
    std::cout << "Current engine state: \n";
    gearbox.SetGearboxState(GearboxState::Park);  // initate with gearlevel in P.
  //  as_integer(gearbox.gearbox_state);
    int current_state = as_integer(GetEngineState());
    throtle_level = ThrotleLevel::ZERO_PERCENT;
  //  gearbox.current_gear = 0;
    gearbox.SetGearBoxLever(0);

  //  std::cout << "Gearbox state: "<< gearbox.current_gear <<"\n";
    std::cout << "Current engine state: "<< as_integer(engine_state) <<"\n";
    // Output that the DIM is active lit up and is active.
}

void Engine::EngineStartingState()
{
    float  min_rpm = 0;
    float  max_rpm = idle_speed;
    std::cout << "ENTERED ENGINE STARTING STATE \n";
 //   gearbox.SetGearBoxLever(1);
    SetEngineRpm(min_rpm, max_rpm);
    std::cout << "Engine rpm ramping up: "<< engine_speed <<"\n";
  
}

void Engine::EngineRunningState() {
// call the setEngineSRPM function and SetVehicleSpeed functions.
// When user put gear lever in D call the vehiclespeed function
   // float min_rpm = idle_speed;
    float max_rpm = 5000;
    float min_rpm[] = {3288, 3454, 3731, 3150, 5000};
    std::cout <<"ENGINE HAS STARTED, RUNNING STATE!"<< "\n";
    
    // call the vehiclespeed and engine speed functions
    switch (gearbox.gear_lever)
    {
    case 0:     
            if (gearbox.gearbox_state == GearboxState::Neutral) {
                SetEngineRpm(min_rpm[0], max_rpm);
                SetVehicleSpeed(min_rpm[0], max_rpm);
                }
        break;
    case 1: if (gearbox.gearbox_state == GearboxState::Reverse)
                {
                    SetEngineRpm(1500, 3000);
                    SetVehicleSpeed(1500, 3000);
                }
                else {
                    SetEngineRpm(min_rpm[0], max_rpm);
                    SetVehicleSpeed(min_rpm[0], max_rpm);
                }
        break;
    case 2:     
                SetEngineRpm(min_rpm[1], max_rpm);
                SetVehicleSpeed(min_rpm[1], max_rpm);
        break;
    case 3:     
                SetEngineRpm(min_rpm[2], max_rpm);
                SetVehicleSpeed(min_rpm[2], max_rpm);
        break;
    case 4:     
                SetEngineRpm(min_rpm[3], max_rpm);
                SetVehicleSpeed(min_rpm[3], max_rpm);
        break;
    case 5:     
                SetEngineRpm(min_rpm[4], max_rpm);
                SetVehicleSpeed(min_rpm[4], max_rpm);
        break;
    
    default:
        break;
    }
    
    std::cout <<"RPM in Running state " << engine_speed <<"\n";
    std::cout <<"Vehicle speed: "<< vehicle_speed << "\n";
         
}

void Engine::EngineAfterRunState() {
    std::cout <<"Entered afterrun state \n";
    vehicle_speed = null_vehicle_speed;
    engine_speed = null_engine_speed;
    
}

void Engine::FillEngineInternalData(uint32_t vcan_received_data) {
    switch (vcan_received_data) {
        case START_ENGINE:
            engine_started = true;
            std::cout<<"Engine Is Started: " << START_ENGINE <<std::endl;
            break;
        case STOP_ENGINE:
            engine_started = false;
            std::cout<<"Engine Is Stopped "<<std::endl;
            break;
        case GEAR_PARK:
            gearbox.SetGearboxState(GearboxState::Park);
            gearbox.SetGearBoxLever(0);
            vehicle_speed = 0;
            std::cout<<"Gearbox is set to Park "<<std::endl;
            break;
        case GEAR_NEUTRAL:
            gearbox.SetGearboxState(GearboxState::Neutral);
            std::cout<<"Gearbox is set to Neutral"<<std::endl;
            gearbox.SetGearBoxLever(0);
            break;
        case GEAR_REAR:
            if (engine_started) {
            gearbox.SetGearboxState(GearboxState::Reverse);
            std::cout<< "Gearbox is set to Reverse\n";
             if (vehicle_speed == 0)
                {
                   std::cout <<"vehicle speed in GEAR DRIVE: "<< (int)vehicle_speed <<"\n";
                    gearbox.SetGearBoxLever(1);
                }
            }
            break;
        case GEAR_DRIVE:
            if (engine_started) {
                gearbox.SetGearboxState(GearboxState::Drive);
                std::cout <<"Gearbox is set to Drive\n";
                if (vehicle_speed == 0)
                {
                   std::cout <<"vehicle speed in GEAR DRIVE: "<< (int)vehicle_speed <<"\n";
                    gearbox.SetGearBoxLever(1);
                }
                
            }
            break;
        case THROTLE_ZERO_PERCENT:
            throtle_level = ThrotleLevel::ZERO_PERCENT;
            std::cout <<"Throtle Level is set to 0%\n";
            break;
        case THROTLE_TEN_PERCENT:
            throtle_level = ThrotleLevel::TEN_PERCENT;
            std::cout <<"Throtle Level is set to 10%\n";
            break;
        case THROTLE_TWENTY_PERCENT:
            throtle_level = ThrotleLevel::TWENTY_PERCENT;
            std::cout <<"Throtle Level is set to 20%\n";
            break;
        case THROTLE_THIRTY_PERCENT:
            throtle_level = ThrotleLevel::THIRTY_PERCENT;
            std::cout <<"Throtle Level is set to 30%\n";
            break;
        case THROTLE_FORTY_PERCENT:
            throtle_level = ThrotleLevel::FORTY_PERCENT;
            std::cout <<"Throtle Level is set to 40%\n";
            break;
        case THROTLE_FIFTY_PERCENT:
            throtle_level = ThrotleLevel::FIFTY_PERCENT;
            std::cout <<"Throtle Level is set to 50%\n";
            break;
        case THROTLE_SIXSTY_PERCENT:
            throtle_level = ThrotleLevel::SIXSTY_PERCENT;
            std::cout <<"Throtle Level is set to 60%\n";
            break;
        case THROTLE_SEVENTY_PERCENT:
            throtle_level = ThrotleLevel::SEVENTY_PERCENT;
            std::cout <<"Throtle Level is set to 70%\n";
            break;
        case THROTLE_EIGHTY_PERCENT:
            throtle_level = ThrotleLevel::EIGHTY_PERCENT;
            std::cout <<"Throtle Level is set to 80%\n";
            break;
        case THROTLE_NINETY_PERCENT:
            throtle_level = ThrotleLevel::NINETY_PERCENT;
            std::cout <<"Throtle Level is set to 90%\n";
            break;
        case THROTLE_HUNDRED_PERCENT:
            throtle_level = ThrotleLevel::HUNDRED_PERCENT;
            std::cout <<"Throtle Level is set to 100%\n";
            break;
        case QUIT_APP:
            // add implementation for exiting the app gracefully
            std::cout <<"Quit Engine Emulator Module\n";
        break;
        default:
            break;
    }
}

float Engine::SetEngineRpm(float _min_rpm, float _max_rpm) {

    float min_rpm = _min_rpm;
    float max_rpm = _max_rpm;
    float increase = 10;  
    float current_rpm = 0;
    static int previous_throtle =0;
    bool throtle_change=false;
    
    if(as_integer(throtle_level) != previous_throtle) //check that there is a new input of throtle and not just repeated can messages
        throtle_change=true;

    // Setting engine speed factor based on gearbox position and current enginespeed.
    float acc_pedal;
    switch (gearbox.gearbox_state)
    {
    case GearboxState::Drive : acc_pedal = 0.05;
        break;
    case GearboxState::Neutral :
        if (engine_speed <= 5000)
        {
           acc_pedal = 0.06;
        }else if (engine_speed > 5000 && engine_speed <= 7000) {
            acc_pedal = 0.03;
        }
        else acc_pedal = 0.01;
        break;
    case GearboxState::Reverse : acc_pedal = 0.05;
        break;
    default:
        break;
    }
    
    std::cout <<"RPM VALUE WHEN ENTERING ENGINERPMFUCNTION FROM RUNNING"<< engine_speed<<"\n";
        
    if ((current_rpm == min_rpm) && as_integer(throtle_level) == 0) {            
        std::this_thread::sleep_for(std::chrono::milliseconds(1)); 
        std::cout <<"Engine started and enginespeed function called: \n";
        engine_speed += increase;
        std::cout <<"engine speed_starting <rpm_value>: "<< engine_speed <<"\n";
            
    }
    else if ((as_integer(throtle_level) >= 0)) {
        //std::this_thread::sleep_for(std::chrono::milliseconds(100)); 
        std::cout<<"enginespeed = idle_speed and acceleration pedal is pressed \n";
        std::cout<<"Current vehiclespeed and max vehicle speed: "<< (int)vehicle_speed << " "<< (int)max_vehicle_speed <<"\n"; 
            if ((engine_speed > idle_speed) && (as_integer(throtle_level) == 0)) //braking implementation
            {
                std::cout <<"Trottle level: "<< as_integer(throtle_level) << "\n";
                
                if (gearbox.gearbox_state == GearboxState::Drive)
                {
                    engine_speed -= acc_pedal * 6; // 0 % throttle
                } 
                else engine_speed -= acc_pedal * 8; // 0 % throttle
            }
            else if (vehicle_speed < max_vehicle_speed) {
                switch (as_integer(throtle_level)) {
                    case 1: std::cout <<"Trottle level: "<< as_integer(throtle_level) << "\n";
                    
                        engine_speed += acc_pedal * 1; // 10% throttle
                        break;
                    case 2:                 
                        engine_speed += acc_pedal * 2;  // 20% throttle
                        break;
                    case 3:
                        engine_speed += acc_pedal * 3;  // 30% throttle
                        break;
                    case 4:  
                        engine_speed += acc_pedal * 4;  // 40% throttle
                        break;
                    case 5: 
                        engine_speed += acc_pedal * 5; // 50%
                        break;
                    case 6: 
                        engine_speed += acc_pedal * 6; // 60%
                        break;
                    case 7: 
                        engine_speed += acc_pedal * 7; // 70%
                        break;
                    case 8: 
                        engine_speed += acc_pedal * 8;  // 80%
                        break;
                    case 9: 
                        engine_speed += acc_pedal * 9;  // 90%
                        break;
                    case 10: 
                        engine_speed += acc_pedal * 10; // 100%
                        break;
                    /*case 0: 
                        if (engine_speed > idle_speed)
                        {   if (gearbox.gearbox_state == GearboxState::Neutral)
                            {
                                engine_speed -= acc_pedal * 6; // 0 % throttle
                            } 
                            else engine_speed -= acc_pedal * 8; // 0 % throttle
                        }*/
                    default:
                        break;
                }
              
                std::cout <<"engine speed_Running <engine_speed>: "<< engine_speed << "\n";
            }
                previous_throtle=as_integer(throtle_level);
                std::cout <<"engine speed_Running_end of function <engine_speed>: "<< engine_speed <<" vehicle speed: " << (int)(vehicle_speed) <<"\n";
                
        }
        if (vehicle_speed >= max_vehicle_speed )
        {
            std::cout<<"Max engine speed is reached! \n";
            engine_speed = 5000;
        }
        
        return engine_speed;
}
// Vehicle speed function.
uint8_t Engine::SetVehicleSpeed(float _min_rpm, float _max_rpm) {

    float min_rpm = _min_rpm;
    float max_rpm = _max_rpm;

// check engine has started and gear is in D
    if (engine_started && ((gearbox.gearbox_state == GearboxState::Drive) || (gearbox.gearbox_state == GearboxState::Reverse))) {
        std::cout <<"IN VEHICLESPEED FUNCTION  AND GEAR LEVER IS: "<< (int)gearbox.gear_lever <<"\n";
            // check rpm >= 5000 and current gear < 5. Added gearbox status so we dont shift up in Reverse.
        if ((engine_speed >= max_rpm ) && (gearbox.gear_lever < gearbox.max_gear) && (gearbox.gearbox_state == GearboxState::Drive)) {
            std::cout <<"higher threshold \n";
            // shift up the gear
            std::this_thread::sleep_for(std::chrono::milliseconds(500)); 
            vehicle_speed = engine_speed * gearbox.gear_ratio[gearbox.gear_lever - 1];
            ShiftUp();
            std::cout <<"CUrrent gear calc: "<< (int)gearbox.gear_lever <<"\n";
            std::cout <<"enginespeed above first gear limit -> shift up: "<< (int)vehicle_speed <<"\n";
            engine_speed = vehicle_speed / gearbox.gear_ratio[gearbox.gear_lever -1];
            std::cout<<"New engine speed: "<< engine_speed << "\n";
            
        }
        // after reaching to idle enginespeed calculate vehicle speed.
        else if ((engine_speed <= max_rpm) && (engine_speed >= idle_speed) /*&& (gearbox.gear_lever == 1)*/) {
                std::cout <<"Current gear level: "<< (int)gearbox.gear_lever <<"\n";
                vehicle_speed = engine_speed * gearbox.gear_ratio[gearbox.gear_lever - 1];
                 std::cout <<"idle speed: "<< (int)vehicle_speed <<"\n";
            }
        // shift down and calculate new rpm value based on current vehiclespeed if rpm is below lower threshold while gear is higher than 1
        else if ((engine_speed <= min_rpm) && (gearbox.gear_lever > 1)) {
                //shift down
                std::this_thread::sleep_for(std::chrono::milliseconds(500)); 
                std::cout<<" CALL SHIFTDWN FUNCTION: \n";
                ShiftDown();
                engine_speed = vehicle_speed / gearbox.gear_ratio[gearbox.gear_lever -1];
        }
        else if ((engine_speed <= min_rpm) && (gearbox.gear_lever == 1) && (gearbox.gearbox_state == GearboxState::Reverse))
        {
                std::cout<<"Driving in Reverse!!! \n";
                vehicle_speed = engine_speed * gearbox.gear_ratio[gearbox.gear_lever - 1];

        }
      /*  else if ((engine_speed >max_rpm) && (gearbox.gear_lever == gearbox.max_gear) )
        {
                vehicle_speed = engine_speed * gearbox.gear_ratio[gearbox.gear_lever - 1];
        }*/
        
        
    if (vehicle_speed >= max_vehicle_speed ) {
        std::cout<<"MAX vehiclespeed reached! \n";
       vehicle_speed = 250;
        
    }
  
    }
    return vehicle_speed;
}
void Engine::ShiftUp() {
            
    if (gearbox.gear_lever > 0 && gearbox.gear_lever < gearbox.max_gear) {
        gearbox.gear_lever++;
        gearbox.SetGearBoxLever(gearbox.gear_lever);
        
     }
}
void Engine::ShiftDown() {
      if (gearbox.gear_lever > 1 && gearbox.gear_lever <= gearbox.max_gear) {
          std::cout<<"Within the SHIFTDWN FUNCTION: " << (int) gearbox.gear_lever<<"\n";
          gearbox.gear_lever--;
          gearbox.SetGearBoxLever(gearbox.gear_lever);
      }
}

void Engine::GetDataToBeSentToInterface(GearboxState& _gearbox_state, bool& _engine_started,
uint8_t& _vehicle_speed, uint& _engine_speed, uint8_t& _gear_lever) {
    _gearbox_state = gearbox.GetGearboxState();
    _engine_started = engine_started;
    _vehicle_speed = vehicle_speed;
    _engine_speed = static_cast<uint>(engine_speed);
    _gear_lever = gearbox.gear_lever;
}

Engine::~Engine() {
}

