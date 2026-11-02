// example: ex34_new_two_steps
// purpose: Show the two steps of new and delete: allocate then construct, and destroy then free.
// expect: ok
#include <cstddef>
#include <iostream>
#include <new>
#include <stdexcept>
struct Sensor {
    int id;
    Sensor(int n) : id{n} {
        if (n < 0) throw std::invalid_argument{"negative id"};
        std::cout << "construct " << id << '\n';
    }
    ~Sensor() { std::cout << "destroy " << id << '\n'; }
    static void* operator new(std::size_t size) {
        std::cout << "allocate " << size << " bytes\n";
        return ::operator new(size);
    }
    static void operator delete(void* memory) {
        std::cout << "free\n";
        ::operator delete(memory);
    }
};
int main() {
    Sensor* good = new Sensor{1};
    delete good;
    try {
        Sensor* bad = new Sensor{-1};
        delete bad;
    } catch (const std::invalid_argument&) {
        std::cout << "constructor failed\n";
    }
}
