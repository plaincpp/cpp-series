// example: ex20_vptr_size
// purpose: Show on x86-64 Linux that a virtual function adds a hidden pointer to each object.
// expect: ok
// in-video: no
#include <iostream>
struct Plain {
    int id = 0;
    int get() const { return id; }
};
struct Virtual {
    int id = 0;
    virtual int get() const { return id; }
};
int main() {
    std::cout << sizeof(Plain) << ' ' << sizeof(Virtual) << '\n';
    std::cout << sizeof(void*) << '\n';
}
