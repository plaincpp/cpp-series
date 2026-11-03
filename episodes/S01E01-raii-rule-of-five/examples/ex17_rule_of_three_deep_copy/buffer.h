#pragma once
#include <algorithm>
#include <cstddef>
#include <utility>
class Buffer {
    std::size_t size_;
    int* data_;
public:
    explicit Buffer(std::size_t size)
        : size_{size}, data_{new int[size]{}} {}
    ~Buffer() { delete[] data_; }
    Buffer(const Buffer& other)
        : size_{other.size_}, data_{new int[other.size_]} {
        std::copy(other.data_, other.data_ + size_, data_);
    }
    Buffer& operator=(const Buffer& other) {
        Buffer copy{other};
        std::swap(size_, copy.size_);
        std::swap(data_, copy.data_);
        return *this;
    }
    int& operator[](std::size_t i) { return data_[i]; }
};
