// example: ex22_rvalue_ref_lifetime
// purpose: Show that an rvalue reference to a temporary keeps the temporary alive to the end of the scope.
// expect: ok
#include <iostream>

struct Note {
    Note()  { std::cout << "make\n"; }
    ~Note() { std::cout << "destroy\n"; }
};

int main() {
    {
        Note&& kept = Note{};
        std::cout << "use\n";
    }
    Note{};
    std::cout << "end\n";
}
