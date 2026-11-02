// example: ex11_werror_unused
// purpose: Show that -Werror changes the unused-variable warning into an error.
// expect: compile-error
// expect-match: unused variable
// flags: -Werror
#include <iostream>

int main() {
    int width = 8;
    int height = 5;
    int area = width * height;
    std::cout << "Area: " << width * height << '\n';
}
