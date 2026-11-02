// example: ex17_std_array_no_overhead
// purpose: Show that std::array has the same size as the C array in it (x86-64 Linux, libstdc++).
// expect: ok
#include <array>
#include <iostream>

int main() {
    std::array<int, 5> scores{90, 85, 77, 60, 95};
    int raw[5] = {90, 85, 77, 60, 95};
    std::cout << sizeof(scores) << ' ' << sizeof(raw) << '\n';
    std::cout << scores.front() << ' ' << scores.back() << '\n';
    std::cout << std::boolalpha << (scores.data() == &scores[0]) << '\n';
}
