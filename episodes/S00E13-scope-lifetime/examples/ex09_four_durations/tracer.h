#pragma once
#include <iostream>

struct Tracer {
    const char* name;
    explicit Tracer(const char* text) : name(text) {
        std::cout << "start " << name << '\n';
    }
    ~Tracer() {
        std::cout << "end " << name << '\n';
    }
};
