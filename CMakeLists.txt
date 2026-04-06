cmake_minimum_required(VERSION 3.15...4.1)
project(CHIP8 VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_SCAN_FOR_MODULES OFF)

option(CHIP8_USE_VENDORED_SDL2 "Download SDL2 with FetchContent if not installed)" OFF)
if(CHIP8_USE_VENDORED_SDL2)
    include(FetchContent)
    FetchContent_Declare(
        SDL2
        GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
        GIT_TAG release-2.30.11
        GIT_SHALLOW TRUE
        OVERRIDE_FIND_PACKAGE
    )
    FetchContent_MakeAvailable(SDL2)
endif()

add_subdirectory(src)
