// example: ex21_move_only_lvalue_error
// purpose: Show that a move-only type accepts an rvalue but rejects an lvalue.
// expect: compile-error
// expect-match: deleted
#include <memory>
#include <utility>

int main() {
    std::unique_ptr<int> first = std::make_unique<int>(7);
    std::unique_ptr<int> second = std::move(first);
    std::unique_ptr<int> third = second;
    return *third;
}
