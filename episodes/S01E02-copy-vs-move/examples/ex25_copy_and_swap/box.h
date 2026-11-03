#pragma once
#include <utility>
struct Box {
    int* value;
    explicit Box(int v) : value{new int{v}} {}
    Box(const Box& other) : value{new int{*other.value}} {}
    Box(Box&& other) noexcept
        : value{std::exchange(other.value, nullptr)} {}
    Box& operator=(Box other) noexcept {
        std::swap(value, other.value);
        return *this;
    }
    ~Box() { delete value; }
};
