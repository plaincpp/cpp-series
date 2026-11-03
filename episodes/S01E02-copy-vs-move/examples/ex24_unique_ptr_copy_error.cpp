// example: ex24_unique_ptr_copy_error
// purpose: Show that a copy of a std::unique_ptr does not compile, because its copy constructor is deleted.
// expect: compile-error
// expect-match: deleted
#include <memory>
int main() {
    auto owner = std::make_unique<int>(42);
    auto second = owner;
    return *second;
}
