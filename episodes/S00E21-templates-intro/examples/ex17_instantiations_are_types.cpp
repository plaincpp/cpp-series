// example: ex17_instantiations_are_types
// purpose: Show that Stack of int and Stack of double are two different types, and each has its own static member.
// expect: ok
// in-video: no
#include <iostream>
#include <type_traits>
template <typename T>
struct Stack {
    inline static int created = 0;
    Stack() { ++created; }
};
int main() {
    Stack<int> a;
    Stack<int> b;
    Stack<double> c;
    std::cout << Stack<int>::created << ' ' << Stack<double>::created << '\n';
    std::cout << std::boolalpha;
    std::cout << std::is_same_v<Stack<int>, Stack<double>> << '\n';
}
