CMAKE_MINIMUM_REQUIRED(VERSION 3.27.4)
PROJECT(ComplexCake)

# OpenCV requried package
FIND_PACKAGE(OpenCV 4.0.0 REQUIRED)
MESSAGE("OPENCV VERSION :${OpenCV_VERSION}")

# Add Opencv header files to the project
INCLUDE_DIRECTORIES(${OpenCV_INCLUDE_DIR})
LINK_DIRECTORIES(${OpenCV_LIB_DIR})

# add a subdirectory to the build
ADD_SUBDIRECTORY(utils)

# add optional log with a precompiler definition
OPTION(WITH_LOG "Build with output logs and images" OFF)
if(WITH_LOG)
    ADD_DEFINITIONS(-DLOG)
ENDIF(WITH_LOG)

# generate our new executable
ADD_EXECUTABLE(${PROJECT_NAME} main.cpp)

# link project with dependencies
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${OpenCV_LIBS} Utils)