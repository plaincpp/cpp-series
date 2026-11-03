// example: ex29_buffer_rule_of_five
// purpose: Use a complete Buffer class with a deep copy, a noexcept move and copy-and-swap in a vector.
// expect: ok
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <utility>
#include <vector>

class Buffer {
public:
    static inline int copies = 0;

    Buffer(std::size_t size, int fill) : size_{size}, data_{new int[size]} {
        std::fill_n(data_, size_, fill);
    }
    Buffer(const Buffer& other) : size_{other.size_}, data_{new int[other.size_]} {
        std::copy_n(other.data_, size_, data_);
        ++copies;
    }
    Buffer(Buffer&& other) noexcept
        : size_{std::exchange(other.size_, 0)},
          data_{std::exchange(other.data_, nullptr)} {}
    Buffer& operator=(Buffer other) noexcept {
        swap(*this, other);
        return *this;
    }
    ~Buffer() { delete[] data_; }

    friend void swap(Buffer& a, Buffer& b) noexcept {
        std::swap(a.size_, b.size_);
        std::swap(a.data_, b.data_);
    }
    std::size_t size() const { return size_; }
    int sum() const {
        int total = 0;
        for (std::size_t i = 0; i < size_; ++i) {
            total += data_[i];
        }
        return total;
    }

private:
    std::size_t size_;
    int* data_;
};

int main() {
    std::vector<Buffer> buffers;
    for (int i = 1; i <= 5; ++i) {
        buffers.push_back(Buffer{100, i});
    }
    std::cout << "copies during growth: " << Buffer::copies << '\n';

    Buffer backup = buffers[0];
    buffers[0] = std::move(buffers[4]);
    buffers.pop_back();
    buffers[1] = backup;
    std::cout << "copies: " << Buffer::copies << '\n';

    for (const Buffer& b : buffers) {
        std::cout << b.size() << '/' << b.sum() << ' ';
    }
    std::cout << '\n';
}
