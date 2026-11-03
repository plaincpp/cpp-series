// example: ex07_short_unlock_before_catch
// purpose: Show that the destructor runs before the catch block starts.
// expect: ok
// in-video: yes
#include <iostream>
struct Guard {
    Guard() { std::cout << "lock\n"; }
    ~Guard() { std::cout << "unlock\n"; }
};
int main() {
    try { Guard g; throw 42; }
    catch (int) { std::cout << "caught\n"; }
}
