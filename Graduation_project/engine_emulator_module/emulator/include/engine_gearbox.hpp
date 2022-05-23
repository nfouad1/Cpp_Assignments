// Copyright [2022] Team Ramones

#ifndef ENGINE_GEARBOX_HPP //NOLINT
#define ENGINE_GEARBOX_HPP  //NOLINT

#include <iostream>

static const uint32_t START_ENGINE = 0x00000001;
static const uint32_t STOP_ENGINE = 0x00000002;
static const uint32_t GEAR_PARK = 0x00000003;
static const uint32_t GEAR_NEUTRAL = 0x00000004;
static const uint32_t GEAR_REAR = 0x00000005;
static const uint32_t GEAR_DRIVE = 0x00000006;
static const uint32_t THROTLE_ZERO_PERCENT = 0x00000007;
static const uint32_t THROTLE_TEN_PERCENT = 0x00000008;
static const uint32_t THROTLE_TWENTY_PERCENT = 0x00000009;
static const uint32_t THROTLE_THIRTY_PERCENT = 0x00000010;
static const uint32_t THROTLE_FORTY_PERCENT = 0x00000011;
static const uint32_t THROTLE_FIFTY_PERCENT = 0x00000012;
static const uint32_t THROTLE_SIXSTY_PERCENT = 0x00000013;
static const uint32_t THROTLE_SEVENTY_PERCENT = 0x00000014;
static const uint32_t THROTLE_EIGHTY_PERCENT = 0x00000015;
static const uint32_t THROTLE_NINETY_PERCENT = 0x00000016;
static const uint32_t THROTLE_HUNDRED_PERCENT = 0x00000017;
static const uint32_t QUIT_APP = 0x00000018;
#define array_size  5
enum class EngineState {
    Init,
    Ready,
    Starting,
    Running,
    AfterRun
};

enum class ThrotleLevel {
    ZERO_PERCENT,
    TEN_PERCENT,
    TWENTY_PERCENT,
    THIRTY_PERCENT,
    FORTY_PERCENT,
    FIFTY_PERCENT,
    SIXSTY_PERCENT,
    SEVENTY_PERCENT,
    EIGHTY_PERCENT,
    NINETY_PERCENT,
    HUNDRED_PERCENT,
};

enum class GearboxState {
    Park,
    Reverse,
    Neutral,
    Drive,
};

class Gearbox {
    public:
    
        const uint8_t max_gear = 5;
        const float gear_ratio[array_size] = {0.02, 0.03, 0.035, 0.04, 0.05};
       //const float gear_ratio[array_size] = {2.95, 1.94, 1.34, 1, 0.63};
        uint8_t gear_lever;
        uint8_t current_gear;
        GearboxState gearbox_state;

        void SetGearboxState(GearboxState _gearbox_state) {
            this->gearbox_state = _gearbox_state;
        }
        void SetGearBoxLever(uint8_t _gear_lever) {
            this->gear_lever = _gear_lever;
        }

        GearboxState GetGearboxState() {
            GearboxState _gearbox_state = gearbox_state;
            return _gearbox_state;
        }
};
class Engine {
    private:
        Gearbox gearbox;
        bool engine_started;
        ThrotleLevel throtle_level;
        uint8_t vehicle_speed;
        float engine_speed;

    public:
        const float idle_speed = 799; // idle engine speed rpm.
        const uint8_t max_vehicle_speed = 250;
        const float max_engine_speed = 9000;
        const uint8_t null_vehicle_speed = 0;
        const float null_engine_speed = 0;
        EngineState engine_state;
        Engine();

        EngineState GetEngineState() {
            return engine_state;
        }

      void EngineTransitionFromInitState();  // Idle: initialize all variables

      void EngineTransitionFromReadyState();
      // Ready: IgnitionOn show by set the e.g enginelamp

      void EngineTransitionFromStartingState();
      // Starting in progress.
      // It is a state while the engine has not started yet,
      // e.g rpm below a threshold

      void EngineTransitionFromRunningState();
      // Running State, transit to this state if rpm above a threshold.

      void EngineTransitionFromAfterRunState();
      // Afterrun state, this state is used after the engine shutdown.

      void EngineInitState();  // Idle: initialize all variables

      void EngineReadyState();  // Ready: IgnitionOn

      void EngineStartingState();  // Starting in progress

      void EngineRunningState();  // Running State

        float SetEngineRpm(float _min_rpm, float _max_rpm);
        // calculate the engine rpm based on user accceleration pedal / throtle
        uint8_t SetVehicleSpeed(float _min_rpm, float _max_rpm);  // calculate the vehiclespeed
    //    int ramp(int x, int inc, int y);
      void FillEngineInternalData(uint32_t vcan_received_data);
      void GetDataToBeSentToInterface(GearboxState& _gearbox_state, bool& _engine_started,
      uint8_t& _vehicle_speed, uint& _engine_speed, uint8_t& _gear_lever);

    void EngineAfterRunState();
    void ShiftUp();
    void ShiftDown();

    ~Engine();
};
// template for enumeration types
template <typename Enumeration>
auto as_integer(Enumeration const value)
    -> typename std::underlying_type<Enumeration>::type
{
    return static_cast<typename std::underlying_type<Enumeration>::type>(value);
}


#endif  // NOLINT
