cmake_minimum_required(VERSION 3.29.6)

project(Text_Editor)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Source files
set(SOURCES src/main.cpp)

# Find the SDL2 package
find_package(SDL2 REQUIRED)

# Include SDL2 directories
include_directories(${SDL2_INCLUDE_DIRS})

# Add the executable
add_executable(Text_Editor ${SOURCES})

# Link the SDL2 library
target_link_libraries(Text_Editor ${SDL2_LIBRARIES})

