cmake_minimum_required(VERSION 3.13)
project(BullCow)

set(CMAKE_CXX_STANDARD 14)

include_directories(BullCow)
include_directories(BullCow/Debug)
include_directories(BullCow/x64)
include_directories(BullCow/x64/Debug)

add_executable(BullCow
        BullCow/Debug/BullCow.pch
        BullCow/x64/Debug/BullCow.pch
        BullCow/BullCow.cpp
        BullCow/pch.cpp
        BullCow/pch.h
        Debug/BullCow.exe
        Debug/BullCow.ilk
        Debug/BullCow.pdb
        possible_ideas.txt)
