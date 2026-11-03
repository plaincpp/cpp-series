// example: ex28_copy_and_swap_cost
// purpose: Count the allocations of copy-and-swap and of an in-place copy into a block of the same size.
// expect: ok
#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <new>
#include <utility>

static int allocations = 0;

void* operator new(std::size_t size) {
    ++allocations;
    if (void* p = std::malloc(size == 0 ? 1 : size)) {
        return p;
    }
    throw std::bad_alloc{};
}
void* operator new[](std::size_t size) { return operator new(size); }
void operator delete(void* p) noexcept { std::free(p); }
void operator delete[](void* p) noexcept { std::free(p); }
void operator delete(void* p, std::size_t) noexcept { std::free(p); }
void operator delete[](void* p, std::size_t) noexcept { std::free(p); }

class Buffer {
public:
    explicit Buffer(std::size_t size) : size_{size}, data_{new int[size]{}} {}
    Buffer(const Buffer& other) : size_{other.size_}, data_{new int[other.size_]} {
        std::copy_n(other.data_, size_, data_);
    }
    Buffer& operator=(const Buffer&) = delete;
    ~Buffer() { delete[] data_; }

    void swap(Buffer& other) noexcept {
        std::swap(size_, other.size_);
        std::swap(data_, other.data_);
    }
    // Copy-and-swap: always a new block. Strong guarantee.
    void assign_by_swap(const Buffer& other) {
        Buffer copy{other};
        swap(copy);
    }
    // Reuse the old block when the sizes are equal. Basic guarantee only.
    void assign_in_place(const Buffer& other) {
        if (size_ != other.size_) {
            assign_by_swap(other);
            return;
        }
        std::copy_n(other.data_, size_, data_);
    }

private:
    std::size_t size_;
    int* data_;
};

int main() {
    Buffer target{1000};
    const Buffer source{1000};

    allocations = 0;
    target.assign_by_swap(source);
    const int by_swap = allocations;

    allocations = 0;
    target.assign_in_place(source);
    const int in_place = allocations;

    std::cout << "copy-and-swap: " << by_swap << " allocation\n";
    std::cout << "in place: " << in_place << " allocations\n";
}
