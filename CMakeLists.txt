cmake_minimum_required(VERSION 3.25)
project(memo)

set(CMAKE_CXX_STANDARD 17)

add_executable(memo main.cpp problemData.h problem.h problemSystem.h problemSystem.cpp problem.cpp problemData.cpp colorConstants.h)
