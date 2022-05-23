cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(EngineGearboxSimulator VERSION 1.0)

add_subdirectory (avic)

add_subdirectory (engine_emulator_module)

add_subdirectory (input_handler_module)

add_subdirectory (lib)