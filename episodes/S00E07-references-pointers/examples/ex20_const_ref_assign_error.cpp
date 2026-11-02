// example: ex20_const_ref_assign_error
// purpose: Show that a function cannot change an object through a const reference.
// expect: compile-error
// expect-match: 'score'
void add_bonus(const int& score) {
    score = score + 10;
}

int main() {
    int points = 50;
    add_bonus(points);
}
