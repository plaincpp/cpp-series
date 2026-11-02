// example: ex22_template_lambda
// purpose: Use a C++20 template parameter list to give a generic lambda a type name.
// expect: ok
#include <iostream>
#include <string>
#include <vector>

int main() {
    auto first_or = []<typename T>(const std::vector<T>& values, T fallback) {
        if (values.empty()) {
            return fallback;
        }
        return values.front();
    };
    std::vector<int> scores{90, 80};
    std::vector<std::string> names;
    std::cout << first_or(scores, 0) << '\n';
    std::cout << first_or(names, std::string("none")) << '\n';
}
