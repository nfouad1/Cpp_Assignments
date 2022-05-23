
add_subdirectory (emulator)

add_executable(EngineEmulatorModuleApp main.cpp)

target_link_libraries(EngineEmulatorModuleApp PUBLIC emulatorlib)

target_link_libraries(EngineEmulatorModuleApp PUBLIC vcanlib)

#link with pthread library
target_link_libraries(EngineEmulatorModuleApp PUBLIC pthread)

target_compile_options(EngineEmulatorModuleApp PRIVATE -Wall -Wextra -Wpedantic -Werror)