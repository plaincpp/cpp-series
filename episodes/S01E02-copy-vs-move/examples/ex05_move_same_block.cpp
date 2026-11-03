// example: ex05_move_same_block
// purpose: Compare a copy, which makes a new block, and a move, which keeps the same block.
// expect: ok
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <utility>

class Buffer {
public:
    explicit Buffer(std::size_t size) : size_{size}, data_{new int[size]{}} {}
    Buffer(const Buffer& other) : size_{other.size_}, data_{new int[other.size_]} {
        std::copy_n(other.data_, size_, data_);
    }
    Buffer(Buffer&& other) noexcept
        : size_{std::exchange(other.size_, 0)},
          data_{std::exchange(other.data_, nullptr)} {}
    Buffer& operator=(const Buffer&) = delete;
    Buffer& operator=(Buffer&&) = delete;
    ~Buffer() { delete[] data_; }

    std::size_t size() const { return size_; }
    const int* data() const { return data_; }

private:
    std::size_t size_;
    int* data_;
};

int main() {
    Buffer a{1000};
    Buffer copy = a;
    std::cout << "copy: same block " << (copy.data() == a.data())
              << ", sizes " << a.size() << ' ' << copy.size() << '\n';

    const int* before = a.data();
    Buffer moved = std::move(a);
    std::cout << "move: same block " << (moved.data() == before)
              << ", sizes " << a.size() << ' ' << moved.size() << '\n';
    std::cout << "source is null: " << (a.data() == nullptr) << '\n';
}
