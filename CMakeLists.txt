cmake_minimum_required(VERSION 3.24)
project(sym)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(sym
        header.h
        functions/help.cpp
        main.cpp
        functions/version.cpp functions/asciiArtedName.cpp functions/randomiser.cpp functions/motivation.cpp)
