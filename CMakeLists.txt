cmake_minimum_required(VERSION 3.26)
project(MyStack)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES
        ./src/MyStack.cpp
        ./main.cpp
)

add_executable(Part_1 ${SOURCES})