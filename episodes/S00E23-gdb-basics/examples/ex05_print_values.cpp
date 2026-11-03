// example: ex05_print_values
// purpose: Print a struct, a vector, a string, a pointer and an expression in GDB.
// expect: ok
// flags: -g -O0
#include <iostream>
#include <string>
#include <vector>

struct Order {
    std::string item;
    int quantity;
    double price;
};

int main() {
    Order order{"pen", 3, 1.5};
    std::vector<int> ids{7, 42, 9};
    int* first = &ids[0];
    double total = order.quantity * order.price;
    std::cout << order.item << ' ' << total << ' ' << *first << '\n';
}
