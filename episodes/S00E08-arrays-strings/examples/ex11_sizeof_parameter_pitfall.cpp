// example: ex11_sizeof_parameter_pitfall
// purpose: Show that sizeof on an array parameter gives the size of a pointer, with a warning.
// expect: ok
// in-video: yes
#include <iostream>

void print_size(int values[5]) {
    std::cout << sizeof(values) << '\n';
}

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    std::cout << sizeof(scores) << '\n';
    print_size(scores);
}
