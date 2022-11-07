

cmake_minimum_required(VERSION 3.5)
project(Builder LANGUAGES CXX)


##AYA bayad hame cpp haro bezarim into ? na lozoman vali mamolan hamero mizarim ta seperate hamashoon compile beshe in cpp ha--->https://stackoverflow.com/questions/35464535/cmake-linker-does-not-recognized-the-header-file
set(SOURCES main.cpp car.cpp engine.cpp engineFactory.cpp wheel.cpp wheelFactory.cpp topLevelCarPartFactory.cpp)



if("${CMAKE_BUILD_TYPE}" STREQUAL "")
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Type of build , option are: Debug , Release" FORCE)

endif()

add_compile_options(-Wall -Wextra)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS_DEBUG "-g2 -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")



add_executable(BuilderFactory ${SOURCES})
target_link_directories(BuilderFactory PUBLIC ${CMAKE_CURRENT_LIST_DIR})
