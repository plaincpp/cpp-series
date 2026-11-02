// example: ex29_dynamic_leak
// purpose: Show that an object from new lives on with no delete, and LeakSanitizer reports the leak.
// expect: sanitizer
// expect-match: detected memory leaks
// in-video: no
#include <iostream>
int* make_counter() {
    int* counter = new int{10};
    return counter;
}
int main() {
    int* counter = make_counter();
    *counter += 5;
    std::cout << *counter << '\n';
}
