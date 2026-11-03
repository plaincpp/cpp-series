// example: ex11_construction_order
// purpose: Show that local objects are destroyed at the end of their block, in reverse order.
// expect: ok
// in-video: yes
#include <iostream>
struct Tracer {
    char name;
    Tracer(char n) : name{n} { std::cout << " +" << n; }
    ~Tracer() { std::cout << " -" << name; }
};
int main() {
    Tracer a{'a'};
    {
        Tracer b{'b'};
        Tracer c{'c'};
    }
    Tracer d{'d'};
}
