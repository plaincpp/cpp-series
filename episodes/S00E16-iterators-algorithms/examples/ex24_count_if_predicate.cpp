// example: ex24_count_if_predicate
// purpose: Use std::count for one value and std::count_if with a predicate function.
// expect: ok
// in-video: yes
#include <algorithm>
#include <iostream>
#include <vector>

bool is_adult(int age) { return age >= 18; }

int main() {
    std::vector<int> ages{30, 12, 41, 17, 19};
    auto first = ages.begin();
    auto last = ages.end();
    std::cout << std::count(first, last, 41) << '\n';
    std::cout << std::count_if(first, last, is_adult) << '\n';
}
