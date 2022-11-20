cmake_minimum_required(VERSION 3.0)
project(simple_app)
add_executable(simpleapp main.cpp singleton.cpp)
install(TARGETS simpleapp DESTINATION bin)
