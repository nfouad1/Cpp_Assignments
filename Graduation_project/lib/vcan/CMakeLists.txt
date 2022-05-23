add_library(vcanlib SHARED src/socketcan.cpp)

target_include_directories(vcanlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)