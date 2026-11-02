// example: ex11_nullptr_check
// purpose: Use a nullptr check before the pointer dereference, because a pointer can point to no object.
// expect: ok
// in-video: yes
#include <iostream>

void print_score(int* score) {
    if (score == nullptr) std::cout << "no score\n";
    else std::cout << *score << '\n';
}

int main() {
    int points = 42;
    print_score(&points);
    print_score(nullptr);
}
