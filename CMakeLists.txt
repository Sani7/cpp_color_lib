cmake_minimum_required(VERSION 3.25)

project(Colors LANGUAGES CXX)

option(COLOR_BUILD_PIC "Build spdlog with position independent code" OFF)

if(COLOR_BUILD_PIC)
    set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()

add_library(Color)

target_compile_options(Color PRIVATE $<$<CONFIG:Debug>:
    -Wall -Wextra -pedantic-errors -Wconversion -Wsign-conversion
    >)

target_sources(Color
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/color.cpp 
    ${CMAKE_CURRENT_LIST_DIR}/color.hpp
)

target_include_directories(Color
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)
