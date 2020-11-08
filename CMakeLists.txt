# cmake version to be used
cmake_minimum_required( VERSION 3.0 )

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# project name
project( practice )

include_directories( ./include ./src )

# target
add_executable( practice ./src/main.cpp ./src/Problem1_1.cpp ./src/Problem2_1.cpp ./src/Node.cpp)