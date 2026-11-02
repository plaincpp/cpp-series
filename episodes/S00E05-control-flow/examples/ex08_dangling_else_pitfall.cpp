// example: ex08_dangling_else_pitfall
// purpose: Show that an else goes with the nearest if, whatever the indentation.
// expect: ok
#include <iostream>

int main() {
    int age = 15;
    bool member = false;
    if (age >= 18)
        if (member)
            std::cout << "member price\n";
    else
        std::cout << "child price\n";
    std::cout << "done\n";
}
