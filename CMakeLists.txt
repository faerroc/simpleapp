cmake_minimum_required(VERSION 2.8)
project(app_project)
add_executable(simpleapp main.cpp)
install(TARGETS simpleapp DESTINATION bin)