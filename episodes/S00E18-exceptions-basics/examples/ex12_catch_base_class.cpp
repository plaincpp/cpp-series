// example: ex12_catch_base_class
// purpose: Show that one handler for std::logic_error catches the three standard exceptions that derive from it.
// expect: ok
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

void run(int task) {
    std::vector<int> scores{90, 85};
    if (task == 1) std::cout << scores.at(5);
    if (task == 2) scores.reserve(scores.max_size() + 1);
    if (task == 3) std::stoi("abc");
}

int main() {
    for (int task = 1; task <= 3; ++task) {
        try {
            run(task);
        } catch (const std::logic_error&) {
            std::cout << "task " << task << ": logic_error\n";
        }
    }
}
