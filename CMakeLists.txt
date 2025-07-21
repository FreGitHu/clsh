cmake_minimum_required(VERSION 3.31)
project(clsh)

set(CMAKE_CXX_STANDARD 23)

add_executable(clsh main.cpp
        commands/ExitCommand.cpp
        commands/ExitCommand.h
        builtins.cpp
        builtins.h
        commands/HelpCommand.cpp
        commands/HelpCommand.h
        commands/EchoCommand.cpp
        commands/EchoCommand.h)
