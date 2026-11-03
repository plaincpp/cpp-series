// example: ex31_setter_allocations
// purpose: Count the heap allocations of a const reference setter and a by-value setter, for a second call with the same long lvalue.
// expect: ok
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <new>
#include <string>
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

// Design (1): copy assignment into the member.
struct ByReference {
    std::string name_;
    void set_name(const std::string& n) { name_ = n; }
};

// Design (3): take a copy by value, then move it into the member.
struct ByValue {
    std::string name_;
    void set_name(std::string n) { name_ = std::move(n); }
};

int main() {
    const std::string text = "a name that is too long for the small buffer";
    ByReference r;
    ByValue v;
    r.set_name(text);
    v.set_name(text);

    int before = allocations;
    r.set_name(text);
    std::cout << "const reference: " << allocations - before << " allocations\n";

    before = allocations;
    v.set_name(text);
    std::cout << "by value: " << allocations - before << " allocations\n";
}
