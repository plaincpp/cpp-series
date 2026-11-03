// example: ex18_two_of_three_pitfall_ub
// purpose: Show that a class with a deep copy constructor but no copy assignment still deletes one array twice.
// expect: ub
// expect-match: attempting double-free
// stdin: 4
#include <algorithm>
#include <iostream>
class Buffer {
    int size_;
    int* data_;
public:
    explicit Buffer(int size) : size_{size}, data_{new int[size]{}} {}
    ~Buffer() { delete[] data_; }
    Buffer(const Buffer& other)
        : size_{other.size_}, data_{new int[other.size_]} {
        std::copy(other.data_, other.data_ + size_, data_);
    }
};
int main() {
    int size = 0;
    std::cin >> size;
    Buffer a{size};
    Buffer b{size};
    b = a;
}
