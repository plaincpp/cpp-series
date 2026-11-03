// example: ex12_const_ref_fallback
// purpose: Show that an rvalue prefers int&& to const int&, and a const rvalue goes to const int&.
// expect: ok
#include <iostream>
#include <utility>

void kind(int&)       { std::cout << "int&\n"; }
void kind(const int&) { std::cout << "const int&\n"; }
void kind(int&&)      { std::cout << "int&&\n"; }

int main() {
    int count = 5;
    const int limit = 10;
    kind(count);
    kind(limit);
    kind(42);
    kind(std::move(count));
    kind(std::move(limit));
}
