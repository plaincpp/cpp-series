// example: ex03_copy_cost_allocations
// purpose: Count the heap allocations of a copy and of a move of a vector of long strings.
// expect: ok
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <new>
#include <string>
#include <utility>
#include <vector>

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

int main() {
    std::vector<std::string> names{
        "a first name that is too long for the small buffer",
        "a second name that is too long for the small buffer",
        "a third name that is too long for the small buffer"};

    allocations = 0;
    std::vector<std::string> copied = names;
    const int copy_count = allocations;

    allocations = 0;
    std::vector<std::string> moved = std::move(names);
    const int move_count = allocations;

    std::cout << "copy: " << copy_count << " allocations\n";
    std::cout << "move: " << move_count << " allocations\n";
    std::cout << copied.size() << ' ' << moved.size() << '\n';
}
