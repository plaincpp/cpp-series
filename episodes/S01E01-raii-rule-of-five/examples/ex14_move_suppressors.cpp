// example: ex14_move_suppressors
// purpose: Compare classes that keep or lose the implicit move when they declare a destructor.
// expect: ok
#include <iostream>
#include <utility>
struct Tracer {
    Tracer() = default;
    Tracer(const Tracer&) { std::cout << "copy\n"; }
    Tracer(Tracer&&) noexcept { std::cout << "move\n"; }
    Tracer& operator=(const Tracer&) = default;
    Tracer& operator=(Tracer&&) = default;
};
struct Plain { Tracer t; };
struct DefaultDtor { Tracer t; ~DefaultDtor() = default; };
struct CopyCtor {
    Tracer t;
    CopyCtor() = default;
    CopyCtor(const CopyCtor&) = default;
};
struct Base { Tracer t; virtual ~Base() = default; };
struct FixedBase {
    Tracer t;
    FixedBase() = default;
    virtual ~FixedBase() = default;
    FixedBase(const FixedBase&) = default;
    FixedBase& operator=(const FixedBase&) = default;
    FixedBase(FixedBase&&) = default;
    FixedBase& operator=(FixedBase&&) = default;
};
template <class T>
void test(const char* label) {
    T a;
    std::cout << label << ": ";
    [[maybe_unused]] T b = std::move(a);
}
int main() {
    test<Plain>("Plain");
    test<DefaultDtor>("~DefaultDtor() = default");
    test<CopyCtor>("CopyCtor(const CopyCtor&) = default");
    test<Base>("virtual ~Base() = default");
    test<FixedBase>("FixedBase, five defaults");
}
