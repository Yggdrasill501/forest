cmake_minimum_required(VERSION 3.10)

# Set your project name
project(Forest)

# C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()


# Include directories
include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/src/forest)

# Source files
set(SOURCES
)

# Add executable
add_executable(CimiWeb ${SOURCES}
        src/main.cpp
)
