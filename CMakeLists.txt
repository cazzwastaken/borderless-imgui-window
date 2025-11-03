cmake_minimum_required(VERSION 3.20)
project(cheat-menu VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use Unicode character set on Windows
if(WIN32)
    add_compile_definitions(UNICODE _UNICODE)
endif()

add_subdirectory(imgui)
add_subdirectory(cheat)
