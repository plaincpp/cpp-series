// example: ex19_const_ref_no_copy
// purpose: Show that a value parameter copies a large vector and a const reference parameter does not.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>
std::vector<int> scores(1'000'000, 7);

void by_value(std::vector<int> list) {
    std::cout << (&list == &scores ? "same" : "copy") << '\n';
}
void by_const_ref(const std::vector<int>& list) {
    std::cout << (&list == &scores ? "same" : "copy") << '\n';
}
int main() {
    by_value(scores);
    by_const_ref(scores);
}
