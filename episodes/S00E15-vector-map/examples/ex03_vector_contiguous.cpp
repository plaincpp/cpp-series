// example: ex03_vector_contiguous
// purpose: Show that std::vector keeps its elements next to each other in one block of heap memory.
// expect: ok
#include <iostream>
#include <vector>

int main() {
    std::vector<int> values{10, 20, 30, 40};
    int* first = values.data();
    std::cout << std::boolalpha;
    std::cout << (first == &values[0]) << '\n';
    std::cout << (&values[3] - &values[0]) << '\n';
    std::cout << *(first + 2) << '\n';
}
