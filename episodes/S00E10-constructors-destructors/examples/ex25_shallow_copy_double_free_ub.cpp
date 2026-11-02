// example: ex25_shallow_copy_double_free_ub
// purpose: Show that the copy constructor of the compiler copies a pointer, so two destructors delete one array.
// expect: ub
// expect-match: double-free
// in-video: yes
#include <iostream>
class Buffer {
    int* data_;
public:
    Buffer(int size) : data_{new int[size]{}} {}
    ~Buffer() { delete[] data_; }
    int first() const { return data_[0]; }
};
int main() {
    Buffer a{4};
    Buffer b = a;
    std::cout << a.first() + b.first() << '\n';
}
