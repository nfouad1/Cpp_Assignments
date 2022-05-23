#add_subdirectory (${CMAKE_CURRENT_SOURCE_DIR}/../lib/vcan)
add_subdirectory (inputhandler)

add_executable(InputHandlerModuleApp main.cpp)

target_link_libraries(InputHandlerModuleApp PUBLIC vcanlib)
target_link_libraries(InputHandlerModuleApp PUBLIC ncurseslib)

target_compile_options(InputHandlerModuleApp PRIVATE -Wall -Wextra -Wpedantic -Werror)

#target_link_libraries(InputHandlerModuleApp PUBLIC vcanlib)
