// example: ex18_leak_grows_in_loop
// purpose: Show that a leak in a loop grows with each pass, and LeakSanitizer counts the lost objects.
// expect: sanitizer
// expect-match: 400 byte(s) in 100 object(s)
// stdin: 100
#include <iostream>
int copy_value(int value) {
    int* copy = new int{value};
    return *copy;
}
int main() {
    int count = 0;
    std::cin >> count;
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += copy_value(i);
    }
    std::cout << total << '\n';
}
