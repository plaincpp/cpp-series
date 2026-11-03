// example: ex21_template_explicit_argument
// purpose: Give the template argument in angle brackets, and use the same template with std::string.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>
template <typename T>
T larger(T a, T b) {
    return a < b ? b : a;
}
int main() {
    std::cout << larger<double>(3, 4.5) << '\n';
    std::string kiwi = "kiwi";
    std::string fig = "fig";
    std::cout << larger(kiwi, fig) << '\n';
}
