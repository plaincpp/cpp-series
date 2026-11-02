// example: ex20_constructor_throws
// purpose: Show that when a constructor throws, the members that are complete are destroyed, but the destructor of the class does not run.
// expect: ok
#include <iostream>
#include <stdexcept>
#include <string>

struct Part {
    std::string name;
    ~Part() { std::cout << "~Part " << name << '\n'; }
};

struct Engine {
    Part pump{"pump"};
    Part valve{"valve"};
    Engine() {
        std::cout << "Engine body\n";
        throw std::runtime_error{"sensor missing"};
    }
    ~Engine() { std::cout << "~Engine\n"; }
};

int main() {
    try {
        Engine engine;
    } catch (const std::runtime_error& e) {
        std::cout << "caught: " << e.what() << '\n';
    }
}
