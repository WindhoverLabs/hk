# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/vagrant/git/airliner/tools/sitl_gazebo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vagrant/git/airliner/tools/sitl_gazebo/sim

# Include any dependencies generated for this target.
include CMakeFiles/rotors_gazebo_motor_model.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rotors_gazebo_motor_model.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rotors_gazebo_motor_model.dir/flags.make

CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o: CMakeFiles/rotors_gazebo_motor_model.dir/flags.make
CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o: ../src/gazebo_motor_model.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vagrant/git/airliner/tools/sitl_gazebo/sim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o -c /home/vagrant/git/airliner/tools/sitl_gazebo/src/gazebo_motor_model.cpp

CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vagrant/git/airliner/tools/sitl_gazebo/src/gazebo_motor_model.cpp > CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.i

CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vagrant/git/airliner/tools/sitl_gazebo/src/gazebo_motor_model.cpp -o CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.s

CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o.requires:

.PHONY : CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o.requires

CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o.provides: CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o.requires
	$(MAKE) -f CMakeFiles/rotors_gazebo_motor_model.dir/build.make CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o.provides.build
.PHONY : CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o.provides

CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o.provides.build: CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o


# Object files for target rotors_gazebo_motor_model
rotors_gazebo_motor_model_OBJECTS = \
"CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o"

# External object files for target rotors_gazebo_motor_model
rotors_gazebo_motor_model_EXTERNAL_OBJECTS =

librotors_gazebo_motor_model.so: CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o
librotors_gazebo_motor_model.so: CMakeFiles/rotors_gazebo_motor_model.dir/build.make
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_client.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_gui.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_sensors.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_rendering.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_physics.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_ode.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_transport.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_msgs.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_util.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_common.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_gimpact.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_opcode.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_opende_ou.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_math.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_ccd.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libpthread.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libsdformat.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libignition-math2.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libOgreMain.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libpthread.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libOgreTerrain.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libOgrePaging.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libignition-math2.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_timer.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgstreamer-1.0.so
librotors_gazebo_motor_model.so: libmav_msgs.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_client.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_gui.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_sensors.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_rendering.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_physics.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_ode.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_transport.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_msgs.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_util.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_common.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_gimpact.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_opcode.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_opende_ou.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_math.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_ccd.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libpthread.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libsdformat.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libignition-math2.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libOgreMain.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libOgreTerrain.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libOgrePaging.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_client.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_gui.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_sensors.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_rendering.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_physics.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_ode.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_transport.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_msgs.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_util.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_common.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_gimpact.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_opcode.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_opende_ou.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_math.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgazebo_ccd.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libpthread.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libsdformat.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libignition-math2.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libOgreMain.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libOgreTerrain.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libOgrePaging.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.9
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libboost_timer.so
librotors_gazebo_motor_model.so: /usr/lib/x86_64-linux-gnu/libgstreamer-1.0.so
librotors_gazebo_motor_model.so: CMakeFiles/rotors_gazebo_motor_model.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vagrant/git/airliner/tools/sitl_gazebo/sim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library librotors_gazebo_motor_model.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rotors_gazebo_motor_model.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rotors_gazebo_motor_model.dir/build: librotors_gazebo_motor_model.so

.PHONY : CMakeFiles/rotors_gazebo_motor_model.dir/build

CMakeFiles/rotors_gazebo_motor_model.dir/requires: CMakeFiles/rotors_gazebo_motor_model.dir/src/gazebo_motor_model.cpp.o.requires

.PHONY : CMakeFiles/rotors_gazebo_motor_model.dir/requires

CMakeFiles/rotors_gazebo_motor_model.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rotors_gazebo_motor_model.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rotors_gazebo_motor_model.dir/clean

CMakeFiles/rotors_gazebo_motor_model.dir/depend:
	cd /home/vagrant/git/airliner/tools/sitl_gazebo/sim && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vagrant/git/airliner/tools/sitl_gazebo /home/vagrant/git/airliner/tools/sitl_gazebo /home/vagrant/git/airliner/tools/sitl_gazebo/sim /home/vagrant/git/airliner/tools/sitl_gazebo/sim /home/vagrant/git/airliner/tools/sitl_gazebo/sim/CMakeFiles/rotors_gazebo_motor_model.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rotors_gazebo_motor_model.dir/depend

