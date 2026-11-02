// example: ex03_heap_outlives_function
// purpose: Show that a heap object stays alive after the function that made it returns.
// expect: ok
#include <iostream>
struct Ticket {
    int id;
    Ticket(int n) : id{n} { std::cout << "make " << id << '\n'; }
    ~Ticket() { std::cout << "end " << id << '\n'; }
};
Ticket* open_ticket(int id) {
    Ticket* ticket = new Ticket{id};
    std::cout << "return from open_ticket\n";
    return ticket;
}
int main() {
    Ticket* ticket = open_ticket(3);
    std::cout << "main uses " << ticket->id << '\n';
    delete ticket;
}
