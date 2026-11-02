// example: ex01_variables
// purpose: Show that each variable has a type, a name and a value, and that assignment changes the value.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int count = 3;
    double price = 2.5;
    bool in_stock = true;
    char grade = 'B';
    count = count + 1;
    std::cout << count << ' ' << price << '\n';
    std::cout << in_stock << ' ' << grade << '\n';
}
