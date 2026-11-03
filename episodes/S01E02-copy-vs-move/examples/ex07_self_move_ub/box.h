#pragma once
#include <utility>
struct Box {
    int* value;
    explicit Box(int v) : value{new int{v}} {}
    ~Box() { delete value; }
    Box& operator=(Box&& other) noexcept {
        delete value;
        value = std::exchange(other.value, nullptr);
        return *this;
    }
};
