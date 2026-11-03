// example: ex12_static_local_counter
// purpose: Show that a static local variable keeps its value between calls, and an automatic one does not.
// expect: ok
#include <iostream>
int next_id() {
    static int id = 0;
    int step = 0;
    step += 1;
    id += step;
    return id;
}
int main() {
    int first = next_id();
    int second = next_id();
    int third = next_id();
    std::cout << first << ' ' << second << ' ' << third << '\n';
}
