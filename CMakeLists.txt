cmake_minimum_required (VERSION 3.9)
project (${MODEL_NAME})

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wno-unused-function -std=c++0x -Wno-narrowing -Wno-unused-function -std=c++0x")
set (CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall -Wno-unused-function -std=c++0x -Wno-narrowing -Wno-unused-function -std=c++0x")
set (CMAKE_POSITION_INDEPENDENT_CODE ON)
set (CMAKE_SHARED_LINKER_FLAGS "-lc -lgcc_s -lgcc -static-libstdc++ -static-libgcc -Wl,--wrap=memcpy")

include_directories (
    ${${MODEL_NAME}_SOURCE_DIR}/packages/OSPSuite.CPP-Toolbox.${OS_NAME}/OSPSuite.CPP-Toolbox/include
)

file (GLOB SOURCES 
        ${${MODEL_NAME}_SOURCE_DIR}/src/Models/${MODEL_NAME}.cpp
		${${MODEL_NAME}_SOURCE_DIR}/packages/OSPSuite.CPP-Toolbox.${OS_NAME}/OSPSuite.CPP-Toolbox/src/Model.cpp
)

add_library (${MODEL_NAME} SHARED ${SOURCES})

