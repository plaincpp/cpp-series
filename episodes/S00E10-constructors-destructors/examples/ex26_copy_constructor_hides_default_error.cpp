// example: ex26_copy_constructor_hides_default_error
// purpose: Show that a user-declared copy constructor also stops the compiler from writing a default constructor.
// expect: compile-error
// expect-match: no matching
struct Tag {
    char id = 'x';
    Tag(const Tag& other) : id{other.id} {}
};
int main() {
    Tag t;
    return t.id;
}
