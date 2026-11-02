// example: ex20_const_member_modify_error
// purpose: Show that a const member function cannot change a data member.
// expect: compile-error
// expect-match: count_
class Counter {
    int count_ = 0;
public:
    int next() const {
        count_ += 1;
        return count_;
    }
};
int main() {
    Counter counter;
    return counter.next();
}
