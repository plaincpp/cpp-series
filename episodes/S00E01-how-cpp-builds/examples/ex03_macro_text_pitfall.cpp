// example: ex03_macro_text_pitfall
// purpose: Show that a macro replaces text, so SQUARE(2 + 3) gives 11.
// expect: ok
// in-video: yes
#include <iostream>

#define SQUARE(x) x * x
#define TEXT(x) #x
#define SHOW(x) TEXT(x)

int main() {
    std::cout << SHOW(SQUARE(2 + 3)) << '\n';
    std::cout << SQUARE(2 + 3) << '\n';
}
