// example: ex10_catch_no_conversion
// purpose: Show that a handler does not convert int to long, so catch (...) catches the int.
// expect: ok
#include <iostream>

int main() {
    try {
        throw 42;
    } catch (long code) {
        std::cout << "long " << code << '\n';
    } catch (...) {
        std::cout << "other type\n";
    }
    try {
        throw 42;
    } catch (int code) {
        std::cout << "int " << code << '\n';
    }
}
