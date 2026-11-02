// example: ex28_member_order_ub
// purpose: Show that a member that uses a later member in the list reads a value that has no initialization.
// expect: ub
// expect-match: use-of-uninitialized-value
// sanitizer: memory
// compilers: clang
// stdin: 4
// in-video: yes
#include <iostream>
class Buffer {
    int capacity_;
    int size_;
public:
    Buffer(int size) : size_{size}, capacity_{size_ * 2} {}
    int capacity() const { return capacity_; }
};
int main() {
    int n = 0;
    std::cin >> n;
    Buffer b{n};
    std::cout << b.capacity() << '\n';
}
