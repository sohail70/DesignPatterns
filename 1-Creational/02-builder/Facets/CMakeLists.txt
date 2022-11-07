cmake_minimum_required(VERSION 3.5)
project(Builder LANGUAGES CXX)

set(SOURCES
	main.cpp AddressBuilder.cpp EthnicityBuilder.cpp JobBuilder.cpp Person.cpp PersonBuilder.cpp ProfileBuilder.cpp
	)

if("${CMAKE_BUILD_TYPE}" STREQUAL "")
	set(CMAKE_BUILD_TYPE Debug CACHE STRING
		"Type of build, options are: Debug, Release" FORCE)
endif()

# set compile options
add_compile_options(-Wall -Wextra)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS_DEBUG "-g2 -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")


#set(YOUR_DIRECTORY /home/sohail/Design Patterns/1-Creational/02-builder/Facets)



add_executable(builder 
	${SOURCES})

target_include_directories(builder PUBLIC ${CMAKE_CURRENT_LIST_DIR})

#target_link_libraries(builder 
#${CMAKE_CURRENT_LIST_DIR}) 

string(TOUPPER "${CMAKE_BUILD_TYPE}" CMAKE_BUILD_TYPE_UCASE)
message(STATUS ">> CXX Compile Flags (For ${CMAKE_BUILD_TYPE}):\
 ${CMAKE_CXX_FLAGS_${CMAKE_BUILD_TYPE_UCASE}}")
