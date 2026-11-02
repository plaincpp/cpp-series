// example: ex09_uncaught_terminate
// purpose: Show that an exception with no matching handler calls std::terminate, which stops the program.
// expect: runtime-error
// expect-match: terminate called after throwing an instance of 'std::runtime_error'
// in-video: yes
#include <stdexcept>

void load_config() {
    throw std::runtime_error{"config file not found"};
}

int main() {
    load_config();
}
