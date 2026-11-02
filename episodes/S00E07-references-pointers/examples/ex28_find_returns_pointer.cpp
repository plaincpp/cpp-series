// example: ex28_find_returns_pointer
// purpose: Use a pointer return value for a result that can be missing, with nullptr for no result.
// expect: ok
#include <iostream>
#include <vector>

int* find_first_above(std::vector<int>& scores, int limit) {
    for (int& s : scores) {
        if (s > limit) return &s;
    }
    return nullptr;
}

int main() {
    std::vector<int> scores{40, 75, 90};
    int* found = find_first_above(scores, 70);
    if (found != nullptr) *found = 100;
    std::cout << scores[0] << ' ' << scores[1] << ' ' << scores[2] << '\n';
    int* missing = find_first_above(scores, 200);
    std::cout << (missing == nullptr ? "not found" : "found") << '\n';
}
