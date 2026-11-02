// example: ex30_two_owners_ub
// purpose: Show that two std::unique_ptr objects from one raw pointer delete the object two times.
// expect: ub
// expect-match: attempting double-free
#include <iostream>
#include <memory>
int main() {
    int* raw = new int{90};
    std::unique_ptr<int> first{raw};
    std::unique_ptr<int> second{raw};
    std::cout << *first << '\n';
}
