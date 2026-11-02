// example: ex27_copy_and_swap
// purpose: Use copy-and-swap: operator= takes a copy and swaps with it, so self-assignment is safe.
// expect: ok
// in-video: no
#include <algorithm>
#include <iostream>
#include <utility>
class Buffer {
    int* data_;
    int size_;
public:
    Buffer(int size, int fill) : data_{new int[size]}, size_{size} {
        std::fill(data_, data_ + size_, fill);
    }
    Buffer(const Buffer& other) : data_{new int[other.size_]}, size_{other.size_} {
        std::copy(other.data_, other.data_ + size_, data_);
    }
    Buffer& operator=(Buffer other) {
        std::swap(data_, other.data_);
        std::swap(size_, other.size_);
        return *this;
    }
    ~Buffer() { delete[] data_; }
    int size() const { return size_; }
    int first() const { return data_[0]; }
};
int main() {
    Buffer a{3, 7};
    Buffer b{2, 9};
    a = b;
    std::cout << a.size() << ' ' << a.first() << '\n';
    Buffer& same = a;
    a = same;
    std::cout << a.size() << ' ' << a.first() << '\n';
}
