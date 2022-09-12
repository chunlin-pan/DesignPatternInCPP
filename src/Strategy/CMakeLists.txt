cmake_minimum_required(VERSION 3.10)

include_directories(include)

add_subdirectory(lib)


# add the executable
add_executable(Strategy StrategyMain.cpp)

TARGET_LINK_LIBRARIES(Strategy Cash)