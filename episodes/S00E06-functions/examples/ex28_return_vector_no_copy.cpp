// example: ex28_return_vector_no_copy
// purpose: Show that a returned vector keeps its element buffer, so return by value copies no elements.
// expect: ok
#include <iostream>
#include <vector>

const int* made_at = nullptr;

std::vector<int> make_numbers() {
    std::vector<int> numbers{1, 2, 3};
    made_at = numbers.data();
    return numbers;
}

int main() {
    std::vector<int> result = make_numbers();
    std::cout << std::boolalpha << (result.data() == made_at) << '\n';
}
