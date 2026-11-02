// example: ex34_range_for_sum
// purpose: Use a range-for loop to visit each element of an array without an index.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int scores[] = {70, 85, 90};
    int total = 0;
    for (int score : scores) {
        total += score;
    }
    std::cout << total << '\n';
}
