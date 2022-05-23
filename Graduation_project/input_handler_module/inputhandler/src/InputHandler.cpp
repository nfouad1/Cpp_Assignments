// Copyright [2022] Team Ramones

#include <iostream>
#include <string.h>
#include "InputHandler.hpp"  // NOLINT

static int input = 0;
uint32_t user_command = STOP_ENGINE;
bool engine_started = false;

uint32_t KeyboardInput() {
    if ((input = getch()) == ERR) {
        // std::cout << "No keyboard entry \n";
        // refresh();
    } else if (input == keyboard_input[0]) {
        if (!engine_started) {
            user_command = START_ENGINE;
            engine_started = true;
            std::cout << "Start the engine! " << input << "\n \r";
        } else {
            user_command = STOP_ENGINE;
            engine_started = false;
            std::cout << "stop the engine! " << input << "\n \r";
        }

        refresh();
    /*} else if (input == 'b') {
    {
        std::cout << "brake pedal pressed" << input << "\n";
        data_output = input;
        user_command = ;
        refresh();
    }*/
    } else if (input == keyboard_input[1]) {
        std::cout << "gear lever drive" << input << "\n \r";
        user_command = GEAR_DRIVE;
        refresh();
    } else if (input == keyboard_input[2]) {
        std::cout << "gear lever reverse" << input << "\n \r";
        user_command = GEAR_REAR;
        refresh();
    } else if (input == keyboard_input[3]) {
        std::cout << "gear lever neutral" << input << "\n \r";
        user_command = GEAR_NEUTRAL;
        refresh();
    } else if (input == keyboard_input[4]) {
        std::cout << "gear lever park" << input << "\n \r";
        user_command = GEAR_PARK;
        refresh();
    } else if (input == keyboard_input[5]) {
        std::cout << "throtle value : 0% \n \r";
        user_command = THROTLE_ZERO_PERCENT;
        refresh();
    } else if (input == keyboard_input[6]) {
        std::cout << "throtle value : 10% \n \r";
        user_command = THROTLE_TEN_PERCENT;
        refresh();
    } else if (input == keyboard_input[7]) {
        std::cout << "throtle value : 20% \n \r";
        user_command = THROTLE_TWENTY_PERCENT;
        refresh();
    } else if (input == keyboard_input[8]) {
        std::cout << "throtle value : 30% \n \r";
        user_command = THROTLE_THIRTY_PERCENT;
        refresh();
    } else if (input == keyboard_input[9]) {
        std::cout << "throtle value : 40% \n \r";
        user_command = THROTLE_FORTY_PERCENT;
        refresh();
    } else if (input == keyboard_input[10]) {
        std::cout << "throtle value : 50% \n \r";
        user_command = THROTLE_FIFTY_PERCENT;
        refresh();
    } else if (input == keyboard_input[11]) {
        std::cout << "throtle value : 60% \n \r";
        user_command = THROTLE_SIXSTY_PERCENT;
        refresh();
    } else if (input == keyboard_input[12]) {
        std::cout << "throtle value : 70% \n \r";
        user_command = THROTLE_SEVENTY_PERCENT;
        refresh();
    } else if (input == keyboard_input[13]) {
        std::cout << "throtle value : 80% \n \r";
        user_command = THROTLE_EIGHTY_PERCENT;
        refresh();
    } else if (input == keyboard_input[14]) {
        std::cout << "throtle value : 90% \n \r";
        user_command = THROTLE_NINETY_PERCENT;
        refresh();
    } else if (input == keyboard_input[15]) {
        std::cout << "throtle value : 100% \n \r";
        user_command = THROTLE_HUNDRED_PERCENT;
        refresh();
    } else if (input = keyboard_input[16]) {  // To exit the program press q
        std::cout << "Quit APP \n \r";
        user_command = QUIT_APP;
        refresh();
    }

    return user_command;
}
