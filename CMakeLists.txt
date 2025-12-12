cmake_minimum_required(VERSION 3.20)
project(api_test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(cpr CONFIG REQUIRED)

add_executable(api_test api_test.cpp)

target_link_libraries(api_test PRIVATE cpr::cpr)
