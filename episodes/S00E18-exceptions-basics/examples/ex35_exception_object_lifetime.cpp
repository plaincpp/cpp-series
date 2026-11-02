// example: ex35_exception_object_lifetime
// purpose: Show that the exception object lives until the last handler ends, and that a const reference handler makes no copy.
// expect: ok
#include <iostream>

struct Note {
    Note() { std::cout << "make\n"; }
    Note(const Note&) { std::cout << "copy\n"; }
    ~Note() { std::cout << "destroy\n"; }
};

int main() {
    try {
        throw Note{};
    } catch (const Note&) {
        std::cout << "handler\n";
    }
    std::cout << "after\n";
}
