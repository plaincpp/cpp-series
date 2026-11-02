// example: ex21_nonconst_ref_temporary_error
// purpose: Show that a non-const reference parameter does not accept a literal or a temporary value.
// expect: compile-error
// expect-match: lvalue
// in-video: yes
void add_bonus(int& score) {
    score = score + 10;
}

int main() {
    add_bonus(50);
}
