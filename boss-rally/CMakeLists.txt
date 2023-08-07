cmake_minimum_required(VERSION 3.27)
project(boss-rally-decomp)
option(BUILD_LAUNCHER "Build the video-playing launcher" ON)

enable_language(RC)
set(CMAKE_RC_COMPILE_OBJECT
    "<CMAKE_RC_COMPILER> <FLAGS> -O coff <DEFINES> -i <SOURCE> -o <OBJECT>")

if(BUILD_LAUNCHER)
  add_subdirectory(BossRally)
endif()
