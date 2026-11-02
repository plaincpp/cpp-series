// example: ex33_unwinding_stops_at_handler
// purpose: Checkpoint 2: unwinding destroys the objects of the try block before the handler runs, but an object outside the try block lives until main ends.
// expect: ok
#include <iostream>
#include <stdexcept>

struct Guard {
    int id;
    ~Guard() { std::cout << "~Guard " << id << '\n'; }
};

int main() {
    Guard a{1};
    try {
        Guard b{2};
        throw std::runtime_error{"fail"};
    } catch (...) {
        std::cout << "caught\n";
    }
}
