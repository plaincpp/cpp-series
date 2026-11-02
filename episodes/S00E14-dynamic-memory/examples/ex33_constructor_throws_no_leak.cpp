// example: ex33_constructor_throws_no_leak
// purpose: Show that new frees the memory when the constructor throws, so LeakSanitizer finds no leak.
// expect: ok
// stdin: -1
#include <iostream>
#include <stdexcept>
struct Sensor {
    int id;
    Sensor(int n) : id{n} {
        if (n < 0) throw std::invalid_argument{"negative id"};
    }
};
int main() {
    int id = 0;
    std::cin >> id;
    try {
        Sensor* sensor = new Sensor{id};
        std::cout << "made " << sensor->id << '\n';
        delete sensor;
    } catch (const std::invalid_argument&) {
        std::cout << "constructor failed\n";
    }
}
