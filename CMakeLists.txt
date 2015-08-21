cmake_minimum_required(VERSION 3.0.2)
project(Interpolation)

## library dependencies
set(PROJ_DIR "~/VersionControl" CACHE PATH
  "project directory.")
set(LIB_ML_DIR "${PROJ_DIR}/Modules/libML" CACHE PATH
  "path to the libML")
set(LIB_PLOT_DIR "${PROJ_DIR}/Modules/QtPlotter" CACHE PATH
  "path to the QtPlotter")

add_subdirectory(${LIB_ML_DIR} ${CMAKE_BINARY_DIR}/libML)
add_subdirectory(${LIB_PLOT_DIR} ${CMAKE_BINARY_DIR}/plotter)

## interpolation project setting
if (WIN32)
  list(APPEND CMAKE_PREFIX_PATH "c:/Local/msys64/mingw64/")
  set(LIB_EIGEN3_DIR "c:/Local/include/eigen3")
else()
  list(APPEND CMAKE_PREFIX_PATH "/opt/qt5/5.5/gcc_64/")
  set(LIB_EIGEN3_DIR "/usr/local/include/eigen3")
endif()

include_directories(SYSTEM
  ${LIB_ML_DIR} ${LIB_PLOT_DIR} ${LIB_EIGEN3_DIR})

find_package(Qt5Core)
find_package(Qt5Gui)
find_package(Qt5Widgets)
set(CMAKE_AUTOMOC ON)
# set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
    "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  set(warnings "-Wall -Wextra -Werror")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
  set(warnings "/W4 /WX /EHsc")
endif()

if (NOT CONFIGURED_ONCE)
  set(CMAKE_CXX_FLAGS "${warnings}" CACHE STRING
    "C++ flags used by the compiler during all build types." FORCE)
  set(CMAKE_C_FLAGS "${warnings}" CACHE STRING
    "C flags used by the compiler during all build types." FORCE)
endif()

file(GLOB SOURCES src/*.cpp)
add_executable(interpolation src/main.cpp ${SOURCES} ${RESOURCES})
target_link_libraries(interpolation
  Qt5::Core Qt5::Gui Qt5::Widgets MLCore MLInterpolation plotter)
target_compile_features(interpolation PRIVATE cxx_range_for)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CONFIGURED_ONCE TRUE CACHE INTERNAL
  "A flag showing that CMake has configured at least once")
