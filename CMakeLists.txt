## © $today.year C-Web
## Created by Capitaine_steeve78
## Licensed under the Creative Commons BY-NC-SA 4.0
##
## Official repository: https://github.com/Capitaine-steeve78/C-Web

cmake_minimum_required(VERSION 4.1)
project(C_Web)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(include)
include_directories(include/core)

add_executable(C_Web
        include/core/packet.h
        "picture/all picture C-Web V1.zip"
        "picture/C-Web carré.zip"
        "picture/C-Web logoV1.zip"
        "picture/C-Web rond.zip"
        src/modules/test.md
        LICENCE.md
        README.md
        src/core/packet.c
)
