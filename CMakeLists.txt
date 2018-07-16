cmake_minimum_required (VERSION 2.6)
project (Demo)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(src)

# The version number.
set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)

# Where does the input data come from and how is result displayed?
option (TARGET_IS_EMBEDDED "Images are loaded from storage and results are displayed on terminal" ON)
if (TARGET_IS_EMBEDDED)
	set (TERMINAL_USED_FOR_VISUALIZATION true)
	set (WEBCAM_USED_FOR_CAPTURE false)
else (TARGET_IS_EMBEDDED)
	set (TERMINAL_USED_FOR_VISUALIZATION false)
	set (WEBCAM_USED_FOR_CAPTURE true)
endif (TARGET_IS_EMBEDDED)

# Set algorithm 
set (USE_OPENCV_VJ_AND_FISHERF true)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/include/config.h.in"
  "${PROJECT_BINARY_DIR}/include/config.h"
  )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_SOURCE_DIR}/include"
	"${PROJECT_BINARY_DIR}")