// example: ex26_unique_ptr_copy_error
// purpose: Show that a copy of a std::unique_ptr does not compile, because it has one owner only.
// expect: compile-error
// expect-match: deleted
// in-video: yes
#include <memory>
int main() {
    auto first = std::make_unique<int>(90);
    auto second = first;
}
