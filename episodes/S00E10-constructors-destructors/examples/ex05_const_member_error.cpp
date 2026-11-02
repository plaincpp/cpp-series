// example: ex05_const_member_error
// purpose: Show that the constructor body cannot give a const member its value.
// expect: compile-error
// expect-match: const member
// in-video: yes
class Ticket {
    const int id_;
public:
    Ticket(int id) {
        id_ = id;
    }
    int id() const { return id_; }
};
int main() {
    Ticket t{7};
    return t.id();
}
