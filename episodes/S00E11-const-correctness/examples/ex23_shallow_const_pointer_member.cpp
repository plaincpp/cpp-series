// example: ex23_shallow_const_pointer_member
// purpose: Show that a const member function can change an object through a pointer member.
// expect: ok
#include <iostream>
class Sensor {
    int* reading_;
public:
    explicit Sensor(int* target) : reading_(target) {}
    void reset() const { *reading_ = 0; }
};
int main() {
    int value = 42;
    const Sensor sensor(&value);
    sensor.reset();
    std::cout << value << '\n';
}
