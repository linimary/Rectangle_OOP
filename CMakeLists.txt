cmake_minimum_required(VERSION 3.23)
project(Rectangle_OOP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Rectangle_OOP
        Rectangle.cpp
        Rectangle.h
        main.cpp Person.cpp Person.h TextBox.cpp TextBox.h)
