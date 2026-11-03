// example: ex19_file_handle_rule_of_five
// purpose: Write a FileHandle with the rule of five: a destructor, deleted copy and noexcept move.
// expect: ok
// in-video: yes
#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>
#include "file_handle.h"
int main() {
    FileHandle a{std::tmpfile()};
    std::cout << "a: " << a.is_open() << '\n';
    FileHandle b = std::move(a);
    std::cout << "a: " << a.is_open() << " b: " << b.is_open() << '\n';
    FileHandle c{std::tmpfile()};
    c = std::move(b);
    std::cout << "b: " << b.is_open() << " c: " << c.is_open() << '\n';
    std::vector<FileHandle> files;
    files.push_back(std::move(c));
    std::cout << "files: " << files.size() << '\n';
}
