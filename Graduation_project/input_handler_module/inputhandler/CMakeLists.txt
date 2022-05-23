add_library(ncurseslib SHARED src/InputHandler.cpp)
target_include_directories(ncurseslib PUBLIC include)
target_link_libraries(ncurseslib -lncurses)
