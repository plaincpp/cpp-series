// example: ex17_cout_precedence_error
// purpose: Show that << comes before <, so a comparison in std::cout needs parentheses.
// expect: compile-error
// expect-match: and 'int')
#include <iostream>

int main() {
    int count = 3;
    int limit = 5;
    std::cout << count < limit;
}
