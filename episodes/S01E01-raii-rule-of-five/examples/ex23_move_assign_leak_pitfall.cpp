// example: ex23_move_assign_leak_pitfall
// purpose: Show that a move assignment that does not free the old array leaks it.
// expect: sanitizer
// expect-match: detected memory leaks
// stdin: 4
#include <iostream>
#include <utility>
class Buffer {
    int* data_;
public:
    explicit Buffer(int size) : data_{new int[size]{}} {}
    ~Buffer() { delete[] data_; }
    Buffer(Buffer&& other) noexcept
        : data_{std::exchange(other.data_, nullptr)} {}
    Buffer& operator=(Buffer&& other) noexcept {
        data_ = std::exchange(other.data_, nullptr);
        return *this;
    }
};
int main() {
    int size = 0;
    std::cin >> size;
    Buffer a{size};
    Buffer b{size};
    b = std::move(a);
}
