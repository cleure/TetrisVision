
cmake_minimum_required(VERSION 2.8)
include(ExternalProject)

set(OpenCV_URL "https://github.com/Itseez/opencv/archive/3.1.0.zip")
set(OpenCV_CMAKE_ARGS
    -D BUILD_EXAMPLES=OFF
    -D BUILD_PERF_TESTS=OFF
    -D BUILD_TESTS=OFF
    -D CMAKE_INSTALL_PREFIX=${CMAKE_SOURCE_DIR}/OpenCV-build
)

set(OpenCV_INSTALL_DIR "OpenCV-build")

ExternalProject_Add(
    OpenCV
    URL "${OpenCV_URL}"
    CMAKE_ARGS ${OpenCV_CMAKE_ARGS}
)


