cmake_minimum_required (VERSION 3.9)
project (${MODEL_NAME})

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wno-unused-function -std=c++0x -Wno-narrowing")
set (CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall -Wno-unused-function -std=c++0x -Wno-narrowing")
set (CMAKE_POSITION_INDEPENDENT_CODE ON)

include_directories (
    ${${MODEL_NAME}_SOURCE_DIR}/packages/OSPSuite.CPP-Toolbox.${OS_NAME}/OSPSuite.CPP-Toolbox/include
)

file (GLOB SOURCES 
        ${${MODEL_NAME}_SOURCE_DIR}/src/Models/${MODEL_NAME}.cpp
)

add_library (${MODEL_NAME} SHARED ${SOURCES})

