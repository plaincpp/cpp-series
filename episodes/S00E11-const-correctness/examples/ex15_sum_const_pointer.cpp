// example: ex15_sum_const_pointer
// purpose: Use a pointer to const parameter for a function that only reads an array.
// expect: ok
#include <iostream>
int sum(const int* values, int count) {
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += values[i];
    }
    return total;
}
int main() {
    int scores[] = {4, 8, 15};
    std::cout << sum(scores, 3) << '\n';
}
