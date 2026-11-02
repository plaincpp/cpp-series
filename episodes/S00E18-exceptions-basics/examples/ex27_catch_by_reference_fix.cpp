// example: ex27_catch_by_reference_fix
// purpose: Catch by const reference, so the handler sees the full exception object and what() gives the derived message.
// expect: ok
// in-video: yes
#include <iostream>
#include <stdexcept>
struct DiskFull : std::runtime_error {
    DiskFull() : std::runtime_error{"io error"} {}
    const char* what() const noexcept override {
        return "disk full";
    }
};
int main() {
    try { throw DiskFull{}; }
    catch (const std::runtime_error& e) {
        std::cout << e.what() << '\n';
    }
}
