// example: ex03_const_runtime_value
// purpose: Show that a const variable can get its value at run time.
// expect: ok
// stdin: 12
#include <iostream>
int main() {
    int input = 0;
    std::cin >> input;
    const int limit = input * 2;
    std::cout << "limit: " << limit << '\n';
}
