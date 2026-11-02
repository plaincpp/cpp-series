// example: ex26_catch_by_value_slicing_pitfall
// purpose: Show that a handler that catches a base class by value slices the exception, so what() gives the base message.
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
    catch (std::runtime_error e) {
        std::cout << e.what() << '\n';
    }
}
