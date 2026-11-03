// example: ex11_user_move_deletes_copy_error
// purpose: Show that a user-declared move constructor makes the implicit copy constructor deleted.
// expect: compile-error
// expect-match: deleted
#include <string>
#include <utility>
struct Message {
    std::string text;
    Message() = default;
    Message(Message&& other) noexcept = default;
};
int main() {
    Message a;
    Message b = std::move(a);
    Message c = b;
}
