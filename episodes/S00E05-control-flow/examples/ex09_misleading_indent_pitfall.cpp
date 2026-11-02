// example: ex09_misleading_indent_pitfall
// purpose: Show that an if without braces controls only one statement. -Wall finds the misleading indentation.
// expect: ok
#include <iostream>

int main() {
    int errors = 0;
    if (errors > 0)
        std::cout << "errors found\n";
        std::cout << "stop the build\n";
}
