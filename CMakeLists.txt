cmake_minimum_required(VERSION 3.29.6)

project(Text_Editor)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    src/main.cpp
)


set(HEADERS)

add_executable(Text_Editor ${SOURCES} ${HEADERS})

target_include_directories(Text_Editor PRIVATE header sdl2)
