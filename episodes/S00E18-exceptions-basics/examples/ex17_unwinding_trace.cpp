// example: ex17_unwinding_trace
// purpose: Show that stack unwinding destroys the local object of each call, newest first, before the handler runs.
// expect: ok
// in-video: yes
#include <iostream>
#include <stdexcept>
struct Guard {
    int id;
    ~Guard() { std::cout << "~Guard " << id << '\n'; }
};
void step(int id) {
    Guard guard{id};
    if (id == 3) throw std::runtime_error{"fail"};
    step(id + 1);
}
int main() {
    try { step(1); } catch (...) { std::cout << "caught\n"; }
}
