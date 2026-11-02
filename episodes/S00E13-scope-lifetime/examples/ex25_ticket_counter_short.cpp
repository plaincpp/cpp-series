// example: ex25_ticket_counter_short
// purpose: Show that a static local variable keeps its value between calls.
// expect: ok
// in-video: yes
#include <iostream>
int next_ticket() {
    static int ticket = 0;
    return ++ticket;
}
int main() {
    for (int i = 0; i < 3; ++i) {
        std::cout << next_ticket() << '\n';
    }
}
