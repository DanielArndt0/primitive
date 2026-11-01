cmake_minimum_required(VERSION 3.16)

project(primitive VERSION 1.0.0 LANGUAGES CXX)

add_library(primitive INTERFACE)
add_library(primitive::primitive ALIAS primitive)

target_compile_features(primitive INTERFACE cxx_std_11)

target_include_directories(primitive INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(CMAKE_SOURCE_DIR STREQUAL PROJECT_SOURCE_DIR)
    add_executable(primitive_basic examples/basic.cpp)
    target_link_libraries(primitive_basic PRIVATE primitive::primitive)
endif()
