// example: ex09_new_array_trace
// purpose: Show that new[] constructs each element in order and delete[] destroys them in reverse order.
// expect: ok
#include <iostream>
int next_id = 1;
struct Ticket {
    int id;
    Ticket() : id{next_id++} { std::cout << "make " << id << '\n'; }
    ~Ticket() { std::cout << "end " << id << '\n'; }
};
int main() {
    Ticket* tickets = new Ticket[3];
    std::cout << "array ready\n";
    delete[] tickets;
}
