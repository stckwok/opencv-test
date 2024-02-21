cmake_minimum_required(VERSION 2.8)
PROJECT( DisplayImage )

set (CMAKE_CXX_STANDARD 17)

# Requires OpenCV
FIND_PACKAGE( OpenCV REQUIRED )
MESSAGE("OpenCV version : ${OpenCV_VERSION}")

include_directories( ${OpenCV_INCLUDE_DIRS} )
MESSAGE("OpenCV version : ${OpenCV_INCLUDE_DIRS}")

ADD_EXECUTABLE( DisplayImage main.cpp )
TARGET_LINK_LIBRARIES( DisplayImage ${OpenCV_LIBS} )
