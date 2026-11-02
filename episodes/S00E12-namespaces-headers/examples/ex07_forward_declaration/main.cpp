// example: ex07_forward_declaration
// purpose: Use a forward declaration in a header that needs only a pointer to the class.
// expect: ok
#include <iostream>
#include "car.h"
#include "engine.h"

int main() {
    Engine engine{150};
    Car car{&engine};
    std::cout << power(car) << '\n';
}
