// example: ex03_missing_definition
// purpose: Show that a declared function with no definition compiles but does not link.
// expect: link-error
// expect-match: undefined reference
// in-video: yes
#include <iostream>
int area(int width, int height);
int main() {
    std::cout << area(3, 4) << '\n';
}
