// example: ex27_algorithm_copies_lambda
// purpose: Show that std::for_each works on a copy of a stateful lambda and returns that copy.
// expect: ok
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> values{4, 8, 15};
    auto counter = [calls = 0](int) mutable {
        ++calls;
        return calls;
    };
    std::for_each(values.begin(), values.end(), counter);
    std::cout << counter(0) << '\n';
    auto used = std::for_each(values.begin(), values.end(), counter);
    std::cout << used(0) << '\n';
}
