# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.10.2)

# Declares and names the project.

project("djinniexample")

# Include directories
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/../../djinni/generated/cpp/
        ${CMAKE_CURRENT_SOURCE_DIR}/../../djinni/generated/jni/
        ${CMAKE_CURRENT_SOURCE_DIR}/../cpp/
        ${CMAKE_INCLUDE_CURRENT_DIR}../../djinni/support-lib/jni/)

# Path to Djinni Support Code
set(support_dir ${CMAKE_CURRENT_SOURCE_DIR}/../../djinni/support-lib/jni)
# Path to the generated code and our own C++ Implementations
set(include_dirs ${CMAKE_CURRENT_SOURCE_DIR}/../../djinni/generated/cpp/ ${CMAKE_CURRENT_SOURCE_DIR}/../../djinni/generated/jni/ ${CMAKE_CURRENT_SOURCE_DIR}/../cpp/)

# Djinni support code that needs to be compiled
file(
        GLOB_RECURSE support_srcs
        ${support_dir}/*.cpp)
# Generated code and C++ implementation that need to be compiled
file(
        GLOB_RECURSE lib_srcs
        ${CMAKE_CURRENT_SOURCE_DIR}/../../djinni/generated/cpp/*.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/../../djinni/generated/jni/*.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/../../main/cpp/*.cpp
)

# All implementation files that make up our library
set(complete_srcs ${support_srcs} ${lib_srcs})

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
        native-lib

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        native-lib.cpp

        ${complete_srcs})

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        native-lib

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib}
        ${include_dirs}
        ${support_dir})