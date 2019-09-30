# Import Library and Use It
- How to import a library and use it.
- INTERFACE: In our case, lib_sdk is just the interface of libmylib.a

## Requirements
- CMake
    - for ubuntu:sudo apt-get install cmake
    - https://cmake.org/download/
    - minimum version required for this repo: 3.10.2
- GNU Make
    - minimum version required: 4.1

## Compile & Run
- Build:
    - Create /build directory
    - Get in build (cd build/)
    - Type 'cmake ..' to create Makefile
    - Type 'make' to build
- Run:
    - ./import_and_use_lib

    Note:Copy the generated libmylib.a from the build folder of the 1st example(after built) into lib folder. 

## Working Principle
When it starts running, 
- It prints out to stdout as seen below by using the library: <br />

mylib_print: <br />
**** Import and Use Your Library **** <br />
3+2=5 <br />






