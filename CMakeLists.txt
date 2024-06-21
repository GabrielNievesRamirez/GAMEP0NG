cmake_minimum_required(VERSION 3.10)

# set the project name
project(PongGame)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(PongGame src/main.cpp)

# find SFML package
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# include SFML libraries
target_link_libraries(PongGame sfml-graphics sfml-window sfml-system)
