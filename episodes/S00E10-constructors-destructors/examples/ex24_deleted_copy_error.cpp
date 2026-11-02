// example: ex24_deleted_copy_error
// purpose: Use = delete to stop all copies of a class, and show the compiler error at a copy.
// expect: compile-error
// expect-match: deleted
class Connection {
    int id_;
public:
    Connection(int id) : id_{id} {}
    Connection(const Connection&) = delete;
    int id() const { return id_; }
};
int main() {
    Connection a{1};
    Connection b = a;
    return b.id();
}
