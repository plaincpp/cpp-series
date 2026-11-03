// example: ex23_use_after_move_ub
// purpose: Show that a read through a moved-from std::unique_ptr is a null pointer read.
// expect: ub
// expect-match: null pointer
// stdin: 1
#include <iostream>
#include <memory>
#include <utility>
#include <vector>
int main() {
    std::vector<std::unique_ptr<int>> owners;
    auto score = std::make_unique<int>(42);
    owners.push_back(std::move(score));
    int read_again = 0;
    std::cin >> read_again;
    if (read_again == 1) {
        std::cout << *score << '\n';
    }
    std::cout << *owners[0] << '\n';
}
