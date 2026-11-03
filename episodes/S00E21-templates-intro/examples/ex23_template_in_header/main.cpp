// example: ex23_template_in_header
// purpose: Put the full template in the header, so that two .cpp files include it and the program links.
// expect: ok
// in-video: yes
#include <iostream>
#include "max.h"
int best_score(int a, int b);
int main() {
    std::cout << max_of(3, 7) << '\n';
    std::cout << best_score(80, 95) << '\n';
}
