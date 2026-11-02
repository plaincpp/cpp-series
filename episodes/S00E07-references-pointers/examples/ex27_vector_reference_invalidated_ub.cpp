// example: ex27_vector_reference_invalidated_ub
// purpose: Show that push_back can move the vector elements, so an old reference to an element dangles.
// expect: ub
// expect-match: heap-use-after-free
#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores{1, 2, 3};
    int& first = scores[0];
    scores.push_back(4);
    std::cout << first << '\n';
}
