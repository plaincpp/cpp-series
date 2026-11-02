// example: ex07_object_symbols
// purpose: Show the defined and undefined symbols in each object file of a project.
// expect: ok

#include <iostream>
#include "geometry.h"

int main() {
    std::cout << "area: " << area(3, 4) << '\n';
}

// How to see the symbols (Linux, cpptv-toolchain:1; GCC 14 and Clang 19 give the same lines).
// Build one step at a time:
//   g++ -std=c++23 -c geometry.cpp       makes geometry.o
//   g++ -std=c++23 -c main.cpp           makes main.o
//   g++ main.o geometry.o -o app         makes app
//
// $ nm geometry.o
// 0000000000000000 T _Z4areaii
// $ nm -C geometry.o
// 0000000000000000 T area(int, int)
// $ nm -C -g main.o
//                  U area(int, int)
//                  U std::ostream::operator<<(int)
//                  U std::ios_base_library_init()
//                  U std::cout
//                  U std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//                  U std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char)
// 0000000000000000 T main
//
// T: the object file defines the symbol (code in the .text section).
// U: the object file uses the symbol, but another file must define it.
// -C: demangle. _Z4areaii is the mangled name of area(int, int):
//     _Z = C++ name, 4area = a name with 4 letters, i i = two int parameters.
// -g: show only external (global) symbols.
//
// $ g++ -std=c++23 -O2 -S geometry.cpp -o -      (assembly, excerpt)
// _Z4areaii:
//         endbr64
//         movl    %edi, %eax
//         imull   %esi, %eax
//         ret
//
// $ file geometry.o app
// geometry.o: ELF 64-bit LSB relocatable, x86-64, version 1 (SYSV), not stripped
// app:        ELF 64-bit LSB pie executable, x86-64, ... dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, ...
//
// $ g++ main.o -o app                          (geometry.o is missing)
// /usr/bin/ld: main.o: in function `main':
// main.cpp:(.text+0x34): undefined reference to `area(int, int)'
// collect2: error: ld returned 1 exit status
