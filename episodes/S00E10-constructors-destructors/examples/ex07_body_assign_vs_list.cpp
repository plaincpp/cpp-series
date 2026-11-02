// example: ex07_body_assign_vs_list
// purpose: Show that an assignment in the body first default constructs the member, then assigns it.
// expect: ok
#include <iostream>
struct Part {
    int value = 0;
    Part() { std::cout << "Part()\n"; }
    Part(int v) : value{v} { std::cout << "Part(int)\n"; }
    Part& operator=(int v) {
        value = v;
        std::cout << "operator=\n";
        return *this;
    }
};
struct InBody {
    Part part;
    InBody(int v) { part = v; }
};
struct InList {
    Part part;
    InList(int v) : part{v} {}
};
int main() {
    std::cout << "-- in body\n";
    InBody a{5};
    std::cout << "-- in list\n";
    InList b{5};
    std::cout << a.part.value + b.part.value << '\n';
}
