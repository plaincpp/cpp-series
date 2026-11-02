// example: ex23_unique_ptr_basic
// purpose: Use std::make_unique to make a heap object that std::unique_ptr deletes at the end of its scope.
// expect: ok
// in-video: yes
#include <iostream>
#include <memory>
struct Ticket {
    int id;
    Ticket(int n) : id{n} { std::cout << "make " << id << '\n'; }
    ~Ticket() { std::cout << "end " << id << '\n'; }
};
int main() {
    {
        auto ticket = std::make_unique<Ticket>(7);
        std::cout << "use " << ticket->id << '\n';
    }
    std::cout << "after block\n";
}
