// example: ex45_increment_cost
// purpose: Show that ++counter and counter++ make the same machine code when the code does not use the value.
// expect: ok
#include <iostream>

int counter = 0;

void add_pre() {
    ++counter;
}

void add_post() {
    counter++;
}

int main() {
    add_pre();
    add_post();
    std::cout << counter << '\n';
}
