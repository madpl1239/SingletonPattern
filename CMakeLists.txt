# CMakeLists.txt for test singleton
# 30-07-2020 LANA Systems

cmake_minimum_required(VERSION 3.25)
project(test1 LANGUAGES CXX)
add_definitions(-Os -march=native -std=c++23)

file(GLOB SOURCE ./source/*.cpp)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

add_executable(${CMAKE_PROJECT_NAME} ${SOURCE})
