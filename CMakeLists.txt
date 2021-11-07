cmake_minimum_required(VERSION 3.0)

project(calcmn LANGUAGES C)

add_executable(calcmn main.c)

install(TARGETS calcmn RUNTIME DESTINATION bin)
