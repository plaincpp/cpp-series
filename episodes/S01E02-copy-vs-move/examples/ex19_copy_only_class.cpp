// example: ex19_copy_only_class
// purpose: Show that std::move selects the copy constructor of a class that has no move constructor.
// expect: ok
#include <iostream>
#include <utility>
struct Legacy {
    Legacy() = default;
    Legacy(const Legacy&) { std::cout << "copy\n"; }
    ~Legacy() {}
};
int main() {
    Legacy a;
    Legacy b = std::move(a);
}
