// example: ex11_const_pointer_reseat_error
// purpose: Show that a const pointer cannot move to a different object.
// expect: compile-error
// expect-match: variable 'p'
// in-video: yes
int main() {
    int score = 10;
    int bonus = 20;
    int* const p = &score;
    p = &bonus;
}
