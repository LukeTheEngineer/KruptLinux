cmake_minimum_required(VERSION 3.22)

project(Krupt VERSION 2.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#For visual studio builders set the CMAKE_SUPPRESS_REGENERATION to OFF or leave it commented.
#set(CMAKE_SUPPRESS_REGENERATION ON)

# Add your source files here
set(SOURCES
    Krupt.cpp
)

find_package(Boost 1.82 REQUIRED COMPONENTS chrono system thread)
message("Found Boost version: ${Boost_VERSION}")

# Add any additional include directories here
include_directories(
    ${Boost_INCLUDE_DIRS}
)

# Create the executable
add_executable(Krupt ${SOURCES})

# Link against the required libraries
target_link_libraries(Krupt ${Boost_LIBRARIES})
