// example: ex30_no_exceptions_flag
// purpose: Show that -fno-exceptions turns off exceptions, so a throw expression does not compile.
// expect: compile-error
// expect-match: disabled
// flags: -fno-exceptions
#include <stdexcept>

int main() {
    throw std::runtime_error{"no exceptions"};
}
