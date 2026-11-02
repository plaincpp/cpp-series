// example: ex34_rethrow_base_reference
// purpose: Checkpoint 3: throw e; in a handler for const std::exception& throws a new std::exception, so the caller's DiskFull handler does not match.
// expect: ok
#include <iostream>
#include <stdexcept>

struct DiskFull : std::runtime_error {
    DiskFull() : std::runtime_error{"disk full"} {}
};

void save() {
    try {
        throw DiskFull{};
    } catch (const std::exception& e) {
        throw e;
    }
}

int main() {
    try {
        save();
    } catch (const DiskFull&) {
        std::cout << "DiskFull\n";
    } catch (const std::exception&) {
        std::cout << "std::exception\n";
    }
}
