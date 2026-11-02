// example: ex21_null_after_delete
// purpose: Show that a pointer set to nullptr after delete makes a second delete safe and a check possible.
// expect: ok
#include <iostream>
int main() {
    int* score = new int{90};
    delete score;
    score = nullptr;
    delete score;
    if (score == nullptr) {
        std::cout << "no score\n";
    }
}
