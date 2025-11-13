cmake_minimum_required(VERSION 3.26)
project(RayTracing)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(RayTracer src/main.cpp src/Image.cpp src/Object.cpp)
target_include_directories(RayTracer PUBLIC inc/)
