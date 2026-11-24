cmake_minimum_required(VERSION 3.16)
project(garden-autofarm CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(gardenautofarm
    src/main.cpp
    src/farmer.cpp
    src/cycles.cpp
    src/alerts.cpp
    src/cli.cpp
)

target_include_directories(gardenautofarm PRIVATE include)

if(WIN32)
    target_link_libraries(gardenautofarm PRIVATE userenv)
endif()
