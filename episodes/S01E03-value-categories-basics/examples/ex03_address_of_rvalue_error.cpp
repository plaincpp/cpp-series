// example: ex03_address_of_rvalue_error
// purpose: Show that the address operator does not accept an rvalue such as count + 1.
// expect: compile-error
// expect-match: value
// in-video: yes
int main() {
    int count = 5;
    int* a = &count;
    int* b = &(count + 1);
    return *a + *b;
}
