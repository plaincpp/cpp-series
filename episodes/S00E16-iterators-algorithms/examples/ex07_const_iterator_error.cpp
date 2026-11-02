// example: ex07_const_iterator_error
// purpose: Show that begin() on a const vector gives a const_iterator, so a write through it does not compile.
// expect: compile-error
// expect-match: operator*
#include <vector>

void reset_first(const std::vector<int>& ages) {
    auto it = ages.begin();
    *it = 0;
}

int main() {
    std::vector<int> ages{30, 25};
    reset_first(ages);
}
