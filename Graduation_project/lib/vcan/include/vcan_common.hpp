// Copyright [2022] Team Ramones

#ifndef VCAN_COMMON_HPP  // NOLINT
#define VCAN_COMMON_HPP  // NOLINT
#include <iostream>


typedef union _enulator {
    struct __attribute__((packed)) _bits {
    unsigned char GEAR_Park:1;  // Gear Status
    unsigned char GEAR_Reverse:1;  // Gear Status
    unsigned char GEAR_Neutral:1;  // Gear Status
    unsigned char GEAR_Drive:1;  // Gear Status
    unsigned char GEAR_LEVEL:3;  // Gear Level
    unsigned char ENGINE_STATUS:1;  // Engine ON/OFF
    unsigned char RESERVERD_PADDING_1:7;
    // Vehicle Speed*100
    unsigned short VEHICLE_SPEED:8;
    // RPM
    unsigned short RPM;
    unsigned char RESERVERD_PADDING:2;
    } Bits;
    uint8_t Data[8];
} Emulator_t;

#endif  // NOLINT
