// example: ex24_default_base_access_error
// purpose: Show that a class also inherits privately by default, so a public member of the base becomes private.
// expect: compile-error
// expect-match: id' is
struct Base {
    int id = 7;
};

class Derived : Base {
};

int main() {
    Derived d;
    return d.id;
}
