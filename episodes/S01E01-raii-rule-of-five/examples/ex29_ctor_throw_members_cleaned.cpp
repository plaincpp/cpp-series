// example: ex29_ctor_throw_members_cleaned
// purpose: Show that a throw in a constructor destroys the members that are complete, but not the object.
// expect: ok
#include <iostream>
#include <memory>
#include <stdexcept>
struct Part {
    const char* name;
    Part(const char* part_name, bool fail) : name{part_name} {
        if (fail) throw std::runtime_error{part_name};
        std::cout << "built " << name << '\n';
    }
    ~Part() { std::cout << "destroyed " << name << '\n'; }
};
class Engine {
    std::unique_ptr<Part> first_;
    std::unique_ptr<Part> second_;
public:
    explicit Engine(bool fail)
        : first_{std::make_unique<Part>("first", false)},
          second_{std::make_unique<Part>("second", fail)} {
        std::cout << "built engine\n";
    }
    ~Engine() { std::cout << "destroyed engine\n"; }
};
int main() {
    try {
        Engine engine{true};
    } catch (const std::exception& e) {
        std::cout << "caught: " << e.what() << '\n';
    }
}
