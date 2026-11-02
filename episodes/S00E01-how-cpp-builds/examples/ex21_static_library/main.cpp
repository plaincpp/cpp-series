// example: ex21_static_library
// purpose: Build a program from a main file and a small library of text functions.
// expect: ok

#include <iostream>
#include "textlib.h"

int main() {
    std::cout << shout("build") << '\n';
    std::cout << repeat("ab", 3) << '\n';
}

// How to build textlib as a library (Linux, cpptv-toolchain:1, GCC 14).
// cpptv verify-code links the three object files directly. These commands were run by hand.
//
// Static library (an archive of object files; the linker copies the code into app):
//   g++ -std=c++23 -c shout.cpp repeat.cpp main.cpp
//   ar rcs libtextlib.a shout.o repeat.o
//   g++ main.o -L. -ltextlib -o app_static
//   ./app_static                               prints build! and ababab
// $ ar t libtextlib.a
// shout.o
// repeat.o
// $ nm -C app_static | grep shout
// 0000000000002fb4 T shout(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
//
// Link order: the linker reads files from left to right. A library before main.o adds nothing:
// $ g++ -L. -ltextlib main.o -o app_bad
// main.cpp:(.text+0x4f): undefined reference to `shout(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
//
// Shared library (the loader finds the code when the program starts):
//   g++ -std=c++23 -fPIC -c shout.cpp repeat.cpp
//   g++ -shared shout.o repeat.o -o libtextlib.so
//   g++ main.o -L. -ltextlib -o app_shared
// $ ./app_shared
// ./app_shared: error while loading shared libraries: libtextlib.so: cannot open shared object file: No such file or directory
// $ LD_LIBRARY_PATH=. ./app_shared
// build!
// ababab
// $ nm -C app_shared | grep shout
//                  U shout(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
