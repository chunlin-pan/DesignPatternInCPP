cmake_minimum_required(VERSION 3.10)

SET(MAIN_SRC_DIR     ${CMAKE_CURRENT_SOURCE_DIR})
SET(CMAKE_EXPORT_COMPILE_COMMANDS 1)
add_compile_options(-g)
# set the project name
project(DesignPatternInCPP)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)