# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/sohail/Design Patterns/1-Creational/02-builder/Facets"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/sohail/Design Patterns/1-Creational/02-builder/Facets"

# Include any dependencies generated for this target.
include CMakeFiles/builder.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/builder.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/builder.dir/flags.make

CMakeFiles/builder.dir/main.cpp.o: CMakeFiles/builder.dir/flags.make
CMakeFiles/builder.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/Design Patterns/1-Creational/02-builder/Facets/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/builder.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/builder.dir/main.cpp.o -c "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/main.cpp"

CMakeFiles/builder.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/builder.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/main.cpp" > CMakeFiles/builder.dir/main.cpp.i

CMakeFiles/builder.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/builder.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/main.cpp" -o CMakeFiles/builder.dir/main.cpp.s

CMakeFiles/builder.dir/AddressBuilder.cpp.o: CMakeFiles/builder.dir/flags.make
CMakeFiles/builder.dir/AddressBuilder.cpp.o: AddressBuilder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/Design Patterns/1-Creational/02-builder/Facets/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/builder.dir/AddressBuilder.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/builder.dir/AddressBuilder.cpp.o -c "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/AddressBuilder.cpp"

CMakeFiles/builder.dir/AddressBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/builder.dir/AddressBuilder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/AddressBuilder.cpp" > CMakeFiles/builder.dir/AddressBuilder.cpp.i

CMakeFiles/builder.dir/AddressBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/builder.dir/AddressBuilder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/AddressBuilder.cpp" -o CMakeFiles/builder.dir/AddressBuilder.cpp.s

CMakeFiles/builder.dir/EthnicityBuilder.cpp.o: CMakeFiles/builder.dir/flags.make
CMakeFiles/builder.dir/EthnicityBuilder.cpp.o: EthnicityBuilder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/Design Patterns/1-Creational/02-builder/Facets/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/builder.dir/EthnicityBuilder.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/builder.dir/EthnicityBuilder.cpp.o -c "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/EthnicityBuilder.cpp"

CMakeFiles/builder.dir/EthnicityBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/builder.dir/EthnicityBuilder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/EthnicityBuilder.cpp" > CMakeFiles/builder.dir/EthnicityBuilder.cpp.i

CMakeFiles/builder.dir/EthnicityBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/builder.dir/EthnicityBuilder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/EthnicityBuilder.cpp" -o CMakeFiles/builder.dir/EthnicityBuilder.cpp.s

CMakeFiles/builder.dir/JobBuilder.cpp.o: CMakeFiles/builder.dir/flags.make
CMakeFiles/builder.dir/JobBuilder.cpp.o: JobBuilder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/Design Patterns/1-Creational/02-builder/Facets/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/builder.dir/JobBuilder.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/builder.dir/JobBuilder.cpp.o -c "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/JobBuilder.cpp"

CMakeFiles/builder.dir/JobBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/builder.dir/JobBuilder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/JobBuilder.cpp" > CMakeFiles/builder.dir/JobBuilder.cpp.i

CMakeFiles/builder.dir/JobBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/builder.dir/JobBuilder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/JobBuilder.cpp" -o CMakeFiles/builder.dir/JobBuilder.cpp.s

CMakeFiles/builder.dir/Person.cpp.o: CMakeFiles/builder.dir/flags.make
CMakeFiles/builder.dir/Person.cpp.o: Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/Design Patterns/1-Creational/02-builder/Facets/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/builder.dir/Person.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/builder.dir/Person.cpp.o -c "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/Person.cpp"

CMakeFiles/builder.dir/Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/builder.dir/Person.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/Person.cpp" > CMakeFiles/builder.dir/Person.cpp.i

CMakeFiles/builder.dir/Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/builder.dir/Person.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/Person.cpp" -o CMakeFiles/builder.dir/Person.cpp.s

CMakeFiles/builder.dir/PersonBuilder.cpp.o: CMakeFiles/builder.dir/flags.make
CMakeFiles/builder.dir/PersonBuilder.cpp.o: PersonBuilder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/Design Patterns/1-Creational/02-builder/Facets/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/builder.dir/PersonBuilder.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/builder.dir/PersonBuilder.cpp.o -c "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/PersonBuilder.cpp"

CMakeFiles/builder.dir/PersonBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/builder.dir/PersonBuilder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/PersonBuilder.cpp" > CMakeFiles/builder.dir/PersonBuilder.cpp.i

CMakeFiles/builder.dir/PersonBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/builder.dir/PersonBuilder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/PersonBuilder.cpp" -o CMakeFiles/builder.dir/PersonBuilder.cpp.s

CMakeFiles/builder.dir/ProfileBuilder.cpp.o: CMakeFiles/builder.dir/flags.make
CMakeFiles/builder.dir/ProfileBuilder.cpp.o: ProfileBuilder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sohail/Design Patterns/1-Creational/02-builder/Facets/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/builder.dir/ProfileBuilder.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/builder.dir/ProfileBuilder.cpp.o -c "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/ProfileBuilder.cpp"

CMakeFiles/builder.dir/ProfileBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/builder.dir/ProfileBuilder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/ProfileBuilder.cpp" > CMakeFiles/builder.dir/ProfileBuilder.cpp.i

CMakeFiles/builder.dir/ProfileBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/builder.dir/ProfileBuilder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/ProfileBuilder.cpp" -o CMakeFiles/builder.dir/ProfileBuilder.cpp.s

# Object files for target builder
builder_OBJECTS = \
"CMakeFiles/builder.dir/main.cpp.o" \
"CMakeFiles/builder.dir/AddressBuilder.cpp.o" \
"CMakeFiles/builder.dir/EthnicityBuilder.cpp.o" \
"CMakeFiles/builder.dir/JobBuilder.cpp.o" \
"CMakeFiles/builder.dir/Person.cpp.o" \
"CMakeFiles/builder.dir/PersonBuilder.cpp.o" \
"CMakeFiles/builder.dir/ProfileBuilder.cpp.o"

# External object files for target builder
builder_EXTERNAL_OBJECTS =

builder: CMakeFiles/builder.dir/main.cpp.o
builder: CMakeFiles/builder.dir/AddressBuilder.cpp.o
builder: CMakeFiles/builder.dir/EthnicityBuilder.cpp.o
builder: CMakeFiles/builder.dir/JobBuilder.cpp.o
builder: CMakeFiles/builder.dir/Person.cpp.o
builder: CMakeFiles/builder.dir/PersonBuilder.cpp.o
builder: CMakeFiles/builder.dir/ProfileBuilder.cpp.o
builder: CMakeFiles/builder.dir/build.make
builder: CMakeFiles/builder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/sohail/Design Patterns/1-Creational/02-builder/Facets/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable builder"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/builder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/builder.dir/build: builder

.PHONY : CMakeFiles/builder.dir/build

CMakeFiles/builder.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/builder.dir/cmake_clean.cmake
.PHONY : CMakeFiles/builder.dir/clean

CMakeFiles/builder.dir/depend:
	cd "/home/sohail/Design Patterns/1-Creational/02-builder/Facets" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/sohail/Design Patterns/1-Creational/02-builder/Facets" "/home/sohail/Design Patterns/1-Creational/02-builder/Facets" "/home/sohail/Design Patterns/1-Creational/02-builder/Facets" "/home/sohail/Design Patterns/1-Creational/02-builder/Facets" "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/CMakeFiles/builder.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/builder.dir/depend

