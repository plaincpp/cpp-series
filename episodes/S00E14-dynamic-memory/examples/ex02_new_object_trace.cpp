// example: ex02_new_object_trace
// purpose: Show that new runs the constructor and delete runs the destructor of a heap object.
// expect: ok
// in-video: yes
#include <iostream>
struct Ticket {
    int id;
    Ticket(int n) : id{n} { std::cout << "make " << id << '\n'; }
    ~Ticket() { std::cout << "end " << id << '\n'; }
};
int main() {
    Ticket* ticket = new Ticket{7};
    std::cout << "use " << ticket->id << '\n';
    delete ticket;
    std::cout << "after delete\n";
}
