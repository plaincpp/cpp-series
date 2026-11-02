// example: ex14_pass_pointer_and_size
// purpose: Use a pointer parameter and a count parameter to give a function a C array and its size.
// expect: ok
// in-video: yes
#include <iostream>

int sum(const int* values, int count) {
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += values[i];
    }
    return total;
}

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    std::cout << sum(scores, 5) << '\n';
}
