cmake_minimum_required(VERSION 3.20)
project(CppUnderTheHoodClasses LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(class_1_compilation_runtime_memory)
add_subdirectory(class_2_values_pointers_smart_pointers)
