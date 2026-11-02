// example: ex18_unwinding_named_frames
// purpose: Show that unwinding stops at the handler, so a local object of main is destroyed only when main ends.
// expect: ok
#include <iostream>
#include <stdexcept>
#include <string>

struct Guard {
    std::string name;
    ~Guard() { std::cout << "~" << name << '\n'; }
};

void parse() {
    Guard guard{"parse"};
    throw std::runtime_error{"bad input"};
}

void load() {
    Guard guard{"load"};
    parse();
    std::cout << "load end\n";
}

int main() {
    Guard guard{"main"};
    try {
        load();
    } catch (const std::exception& e) {
        std::cout << "caught: " << e.what() << '\n';
    }
    std::cout << "main end\n";
}
