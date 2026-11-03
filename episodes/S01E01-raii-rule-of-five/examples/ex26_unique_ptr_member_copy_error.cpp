// example: ex26_unique_ptr_member_copy_error
// purpose: Show that a class with a std::unique_ptr member is move-only, so a copy does not compile.
// expect: compile-error
// expect-match: deleted
#include <memory>
struct Logger {
    std::unique_ptr<int> buffer;
};
int main() {
    Logger a{std::make_unique<int>(42)};
    Logger b = a;
}
