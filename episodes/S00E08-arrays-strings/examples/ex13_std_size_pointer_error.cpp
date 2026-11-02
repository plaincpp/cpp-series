// example: ex13_std_size_pointer_error
// purpose: Show that std::size does not compile on an array parameter, because the parameter is a pointer.
// expect: compile-error
// expect-match: no matching function for call to
#include <iostream>
#include <iterator>

void print_count(int values[5]) {
    std::cout << std::size(values) << '\n';
}

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    print_count(scores);
}
