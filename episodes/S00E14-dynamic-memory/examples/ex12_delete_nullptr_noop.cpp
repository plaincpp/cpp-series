// example: ex12_delete_nullptr_noop
// purpose: Show that delete on a null pointer does nothing, so no check is necessary before delete.
// expect: ok
#include <iostream>
int main() {
    int* score = nullptr;
    delete score;
    int* scores = nullptr;
    delete[] scores;
    std::cout << "no error\n";
}
