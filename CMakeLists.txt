cmake_minimum_required(VERSION 3.23)
project(sbms C)

set(CMAKE_C_STANDARD 99)

add_executable(sbms src/main.c src/sbms.h src/account.c src/monetary_actions.c src/global.c src/global.h)
