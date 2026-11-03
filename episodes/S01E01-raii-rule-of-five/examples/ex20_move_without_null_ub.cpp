// example: ex20_move_without_null_ub
// purpose: Show that a move constructor that does not empty the source makes two owners of one array.
// expect: ub
// expect-match: attempting double-free
// stdin: 4
#include <iostream>
#include <utility>
class Buffer {
    int* data_;
public:
    explicit Buffer(int size) : data_{new int[size]{}} {}
    ~Buffer() { delete[] data_; }
    Buffer(const Buffer&) = delete;
    Buffer& operator=(const Buffer&) = delete;
    Buffer(Buffer&& other) noexcept : data_{other.data_} {}
};
int main() {
    int size = 0;
    std::cin >> size;
    Buffer a{size};
    Buffer b = std::move(a);
}
