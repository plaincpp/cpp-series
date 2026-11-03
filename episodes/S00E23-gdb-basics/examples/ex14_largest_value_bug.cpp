// example: ex14_largest_value_bug
// purpose: Debug a program that reads input with run < file and display in GDB.
// expect: ok
// flags: -g -O0
// stdin: 3 -5 -2 -9
#include <iostream>

int main() {
    int count = 0;
    std::cin >> count;
    int largest = 0;
    for (int i = 0; i < count; ++i) {
        int value = 0;
        std::cin >> value;
        if (value > largest)
            largest = value;
    }
    std::cout << "largest: " << largest << '\n';
}
