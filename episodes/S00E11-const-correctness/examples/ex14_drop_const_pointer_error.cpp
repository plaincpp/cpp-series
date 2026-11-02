// example: ex14_drop_const_pointer_error
// purpose: Show that a pointer to non-const cannot point to a const object.
// expect: compile-error
// expect-match: const int
int main() {
    const int limit = 100;
    int* p = &limit;
    *p = 200;
}
