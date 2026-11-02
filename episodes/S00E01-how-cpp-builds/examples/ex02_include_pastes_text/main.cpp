// example: ex02_include_pastes_text
// purpose: Show that #include puts the full text of a file into the source file.
// expect: ok
#include <iostream>

int main() {
#include "greeting.txt"
    std::cout << "Back in main.cpp\n";
}
