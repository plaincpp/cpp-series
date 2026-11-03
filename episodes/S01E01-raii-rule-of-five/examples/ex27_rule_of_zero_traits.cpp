// example: ex27_rule_of_zero_traits
// purpose: Use type traits to show that rule-of-zero classes get the copy and move rules of their members.
// expect: ok
#include <iostream>
#include <memory>
#include <string>
#include <type_traits>
#include <vector>
struct Document { std::string title; std::vector<int> pages; };
struct Logger { std::unique_ptr<int> buffer; };
template <class T>
void show(const char* label) {
    std::cout << label
              << " copy:" << std::is_copy_constructible_v<T>
              << " nothrow-move:" << std::is_nothrow_move_constructible_v<T>
              << '\n';
}
int main() {
    show<Document>("Document");
    show<Logger>("Logger  ");
}
