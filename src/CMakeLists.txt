
cmake_minimum_required(VERSION 2.8)

#message("${OpenCV_INCLUDE_DIRS}")
#message("${OpenCV_LIBS}")

#set(LINK_LIBRARIES)

#include_directories(${PROJECT_SOURCE_DIR})

#find_package(OpenCV REQUIRED)

# Math
#LIST(APPEND LINK_LIBRARIES m)

set(OpenCV_INCLUDE_DIR "../deps/OpenCV-build/include")
set(OpenCV_LIB_DIR "../deps/OpenCV-build/lib")

include_directories(${OpenCV_INCLUDE_DIR})
file(GLOB OpenCV_LIBS "${OpenCV_LIB_DIR}/*.dylib")
file(GLOB SOURCES "./*.cpp")

add_executable(123qweasd ${SOURCES})
target_link_libraries(123qweasd  ${OpenCV_LIBS})

