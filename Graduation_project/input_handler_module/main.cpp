// Copyright [2022] Team Ramones

#include <iostream>
#include <socketcan.hpp>  // NOLINT
#include <InputHandler.hpp>  // NOLINT

int main() {
    initscr();
    cbreak();
    noecho();
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);
    refresh();

    scpp::SocketCan socket_can;
    const uint8_t bits_in_byte = 8;

    if (socket_can.open("vcan0") != scpp::STATUS_OK) {
        std::cout << "Cannot open vcan0." << std::endl;
        std::cout << "Check whether the vcan0 interface is up!" << std::endl;
        exit(-1);
    }

    while (true) {
        uint32_t data_to_write = KeyboardInput();
        uint32_t can_frame_id = 123;

        scpp::CanFrame can_frame_to_write;

        can_frame_to_write.id = can_frame_id;
        can_frame_to_write.len = sizeof(data_to_write);

        // Feed the data to the CAN frame
        for (int i = 0; i < can_frame_to_write.len; ++i) {
            can_frame_to_write.data[i] =
            ((data_to_write << (bits_in_byte * i))
             >> (bits_in_byte * (can_frame_to_write.len - 1)));
        }

        auto write_sc_status = socket_can.write(can_frame_to_write);
        if (write_sc_status != scpp::STATUS_OK)
            std::cout << "something went wrong on socket write, error code :"
            << int32_t(write_sc_status) << "\n";
        // else
        //     std::cout << "Message was written to the socket \n";
        //  sleep
        for (size_t i = 0; i < 9999; i++) {}
    }
    return 0;
    endwin();
}
