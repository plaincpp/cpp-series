// example: ex17_dynamic_outlives_function
// purpose: Show that a dynamic object lives after its function returns, until delete ends it.
// expect: ok
// in-video: yes
#include <iostream>

int* make_counter() {
    int* counter = new int{10};
    return counter;
}

int main() {
    int* counter = make_counter();
    *counter += 5;
    std::cout << *counter << '\n';
    delete counter;
}
