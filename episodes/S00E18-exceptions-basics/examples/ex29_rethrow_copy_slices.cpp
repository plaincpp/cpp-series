// example: ex29_rethrow_copy_slices
// purpose: Compare throw; and throw e;: throw e; throws a copy of the base part, so the outer DiskFull handler does not match.
// expect: ok
#include <iostream>
#include <stdexcept>

struct DiskFull : std::runtime_error {
    DiskFull() : std::runtime_error{"io error"} {}
};

void save(bool same_object) {
    try {
        throw DiskFull{};
    } catch (const std::runtime_error& e) {
        if (same_object) throw;
        throw e;
    }
}

int main() {
    for (bool same_object : {true, false}) {
        try {
            save(same_object);
        } catch (const DiskFull&) {
            std::cout << "DiskFull\n";
        } catch (const std::runtime_error&) {
            std::cout << "runtime_error only\n";
        }
    }
}
