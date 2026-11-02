// example: ex35_const_cast_legal
// purpose: Show that a write through const_cast is correct when the object itself is not const.
// expect: ok
// in-video: yes
#include <iostream>
void set_limit(const int& limit, int value) {
    const_cast<int&>(limit) = value;
}
int main() {
    int max_users = 100;
    set_limit(max_users, 200);
    std::cout << max_users << '\n';
}
