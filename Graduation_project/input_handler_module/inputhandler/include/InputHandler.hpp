// Copyright [2022] Team Ramones

#ifndef INPUTHANDLER_HPP  // NOLINT
#define INPUTHANDLER_HPP  // NOLINT
#include <ncursesw/ncurses.h>

uint32_t KeyboardInput();

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

char keyboard_input[17] = {'s', 'd', 'r', 'n', 'p', '0', '1',
 '2', '3', '4', '5', '6', '7', '8', '9', '+', 'q'};

#endif  // NOLINT
