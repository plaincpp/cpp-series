// example: ex12_parameter_redefinition_error
// purpose: Show that an int[5] parameter and an int* parameter make the same function.
// expect: compile-error
// expect-match: redefinition of
#include <iostream>

void show(int values[5]) {
    std::cout << values[0] << '\n';
}

void show(int* values) {
    std::cout << values[0] << '\n';
}

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    show(scores);
}
