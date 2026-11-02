// example: ex03_hello_printf
// purpose: Show the same output with printf from the C library.
// expect: ok
#include <cstdio>

int main() {
    std::printf("Hello, %s!\n", "world");
    std::printf("2 + 3 = %d\n", 2 + 3);
}
