// example: ex21_default_in_header
// purpose: Write the default arguments in the declaration in the header, and not in the definition.
// expect: ok
// in-video: yes
#include "ruler.h"

int main() {
    draw_line();
    draw_line(3, '*');
}
