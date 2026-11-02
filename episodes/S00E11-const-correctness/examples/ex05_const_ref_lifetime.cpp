// example: ex05_const_ref_lifetime
// purpose: Show that a local const reference keeps a temporary object alive to the end of its scope.
// expect: ok
#include <iostream>
struct Tracer {
    const char* name;
    ~Tracer() { std::cout << "destroy " << name << '\n'; }
};
Tracer make(const char* name) {
    return Tracer{name};
}
int main() {
    const Tracer& kept = make("kept");
    make("temp");
    std::cout << "use " << kept.name << '\n';
}
