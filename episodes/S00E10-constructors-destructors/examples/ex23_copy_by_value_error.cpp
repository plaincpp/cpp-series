// example: ex23_copy_by_value_error
// purpose: Show that a copy constructor must take its parameter by reference, not by value.
// expect: compile-error
// expect-match: constructor
struct Tag {
    char id;
    Tag(char c) : id{c} {}
    Tag(Tag other) : id{other.id} {}
};
int main() {
    Tag a{'a'};
    Tag b = a;
    return b.id;
}
