cmake_minimum_required(VERSION 3.12)
project(FunctionSum)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc
                    ${CMAKE_CURRENT_SOURCE_DIR}/src
                    )
message(CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB SOURCE_FILES
        inc/*.h
        src/*.cpp
        )

add_executable(FunctionSum main.cpp ${SOURCE_FILES} )

