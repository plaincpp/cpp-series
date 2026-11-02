// example: ex31_get_dangles_ub
// purpose: Show that the raw pointer from get() dangles after the std::unique_ptr deletes the object.
// expect: ub
// expect-match: heap-use-after-free
#include <iostream>
#include <memory>
int main() {
    auto owner = std::make_unique<int>(90);
    int* view = owner.get();
    owner.reset();
    std::cout << *view << '\n';
}
