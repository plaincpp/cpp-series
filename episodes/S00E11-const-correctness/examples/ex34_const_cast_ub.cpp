// example: ex34_const_cast_ub
// purpose: Show that a write through const_cast to a const object is undefined behavior.
// expect: ub
// expect-match: SEGV
// stdin: 200
// in-video: yes
#include <iostream>
const int max_users = 100;
void set_limit(const int& limit, int value) {
    const_cast<int&>(limit) = value;
}
int main() {
    int value = 0;
    std::cin >> value;
    set_limit(max_users, value);
    std::cout << max_users << '\n';
}
