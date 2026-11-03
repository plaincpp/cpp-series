// example: ex29_generic_sum
// purpose: Write a realistic function template that adds the elements of a vector of any number type.
// expect: ok
// in-video: no
#include <iostream>
#include <vector>
template <typename T>
T sum(const std::vector<T>& values) {
    T total{};
    for (const T& value : values) {
        total += value;
    }
    return total;
}
int main() {
    std::vector<int> counts{3, 4, 5};
    std::vector<double> prices{1.5, 2.25, 0.25};
    std::cout << sum(counts) << '\n';
    std::cout << sum(prices) << '\n';
    std::cout << sum(std::vector<int>{}) << '\n';
}
