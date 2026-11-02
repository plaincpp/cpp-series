// example: ex41_bool_increment_error
// purpose: Show that C++17 and later do not accept ++ on a bool.
// expect: compile-error
// expect-match: C++17
#include <iostream>

int main() {
    bool ready = false;
    ++ready;
    std::cout << ready << '\n';
}
