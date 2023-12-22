cmake_minimum_required(VERSION 3.26)
project(RDSelects)

set(CMAKE_CXX_STANDARD 17)

add_executable(RDSelects main.cpp
        rselect_dselect.h
        rselect_dselect.cpp
)
