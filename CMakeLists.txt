
cmake_minimum_required(VERSION 2.8)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)

set(OpenCV_INCLUDE_DIR "deps/OpenCV-build/include")
set(OpenCV_LIB_DIR "deps/OpenCV-build/lib")
file(GLOB OpenCV_LIBS "${OpenCV_LIB_DIR}/*.dylib")

include_directories(
    src
    ${OpenCV_INCLUDE_DIR}
    ${Qt5Widgets_INCLUDE_DIRS}
)

message("${OpenCV_INCLUDE_DIRS}")

file(GLOB SOURCES src/*.cpp)

add_executable(test ${SOURCES})
target_link_libraries(test Qt5::Widgets ${OpenCV_LIBS})

