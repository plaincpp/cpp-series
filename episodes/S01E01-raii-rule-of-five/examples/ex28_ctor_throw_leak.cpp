// example: ex28_ctor_throw_leak
// purpose: Show that a throw in a constructor skips the destructor, so a raw pointer member leaks.
// expect: sanitizer
// expect-match: detected memory leaks
// stdin: 1
#include <iostream>
#include <stdexcept>
struct Part {
    int data[64]{};
    explicit Part(bool fail) {
        if (fail) throw std::runtime_error{"part failed"};
    }
};
class Engine {
    Part* first_;
    Part* second_;
public:
    explicit Engine(bool fail)
        : first_{new Part{false}}, second_{new Part{fail}} {}
    ~Engine() {
        delete second_;
        delete first_;
    }
};
int main() {
    bool fail = false;
    std::cin >> fail;
    try {
        Engine engine{fail};
    } catch (const std::exception& e) {
        std::cout << "caught: " << e.what() << '\n';
    }
}
