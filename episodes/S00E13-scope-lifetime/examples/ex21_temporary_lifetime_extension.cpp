// example: ex21_temporary_lifetime_extension
// purpose: Show that a const reference keeps a temporary alive until the end of the reference's block.
// expect: ok
#include <iostream>

struct Tracer {
    Tracer() { std::cout << "start\n"; }
    ~Tracer() { std::cout << "end\n"; }
};

Tracer make_tracer() {
    return Tracer{};
}

int main() {
    make_tracer();
    std::cout << "after the statement\n";
    {
        const Tracer& kept = make_tracer();
        std::cout << "in the block\n";
    }
    std::cout << "after the block\n";
}
