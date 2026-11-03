// example: ex25_unique_ptr_file_closer
// purpose: Use std::unique_ptr with a custom deleter, so that a class owns a file with no special members.
// expect: ok
// in-video: yes
#include <cstdio>
#include <iostream>
#include <memory>
#include <utility>
struct FileCloser {
    void operator()(std::FILE* f) const { std::fclose(f); }
};
using File = std::unique_ptr<std::FILE, FileCloser>;
struct Logger { File out; };
int main() {
    Logger a{File{std::tmpfile()}};
    Logger b = std::move(a);
    std::cout << "a empty: " << (a.out == nullptr) << '\n';
}
