// example: ex06_template_vs_overload
// purpose: Show that a normal function wins over a template for an exact match, and that empty angle brackets select the template.
// expect: ok
// in-video: no
#include <iostream>
template <typename T>
void show(T) {
    std::cout << "template\n";
}
void show(int) {
    std::cout << "normal\n";
}
int main() {
    show(3);
    show(2.5);
    show('x');
    show<>(3);
}
