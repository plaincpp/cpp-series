// example: ex30_destructor_throw_terminate
// purpose: Show that a destructor is noexcept, so a throw from it calls std::terminate.
// expect: runtime-error
// expect-match: terminate called
#include <iostream>
#include <stdexcept>
struct Connection {
    ~Connection() { throw std::runtime_error{"close failed"}; }
};
int main() {
    try {
        Connection connection;
    } catch (const std::exception& e) {
        std::cout << "caught: " << e.what() << '\n';
    }
}
