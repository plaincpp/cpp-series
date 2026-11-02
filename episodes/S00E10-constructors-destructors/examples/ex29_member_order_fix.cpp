// example: ex29_member_order_fix
// purpose: Declare the members in the order of the list, so that each member uses only members that are ready.
// expect: ok
// stdin: 4
// in-video: yes
#include <iostream>
class Buffer {
    int size_;
    int capacity_;
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
