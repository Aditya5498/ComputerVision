CMAKE_MINIMUM_REQURIED (VERSION 3.27.4)
PROJECT(TRIAL_CHAPTER)
# REQUIRES OPENCV
FIND_PACKAGE(OpenCV 4.0.0 REQUIRED)
MESSAGE("OPENCV VERSION : ${OpenCV_VERSION}")

# add paths to include directories or header files
include_directories(${OpenCV_INCLUDE_DIRS})

# add paths to the compiled libraries
link_directories(${OpenCV_LINK_DIRS})

# creating a variable - easy way to include all files 
SET(SRC main.cpp util.cpp color.cpp)

# create an executable
ADD_EXECUTABLE(${PROJECT_NAME} ${SRC})

# Link our library 
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${OpenCV_LIBS})