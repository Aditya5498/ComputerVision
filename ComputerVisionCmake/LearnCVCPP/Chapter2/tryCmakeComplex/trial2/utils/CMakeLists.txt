CMAKE_MINIMUM_REQUIRED(VERSION 3.27.4)
PROJECT(Utils)

# add new variable for src utils lib
SET(UTILS_LIB_SRC computerLib.cpp logger.cpp plotting.cpp)

# create our new lib 
ADD_LIBRARY(Utils $${UTILS_LIB_SRC})

# make sure the compiler can find the include files of the libraries
TARGET_INCLUDE_DIRECTORIES(Utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
