// example: ex15_array_reference_param
// purpose: Show that a reference-to-array parameter keeps the size, so sizeof and std::size work.
// expect: ok
#include <iostream>
#include <iterator>

void print_size(const int (&values)[5]) {
    std::cout << sizeof(values) << ' ' << std::size(values) << '\n';
}

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    print_size(scores);
}
