// example: ex14_new_array_init_list
// purpose: Show that new[] with a short list in braces sets the other elements to zero.
// expect: ok
#include <iostream>
int main() {
    int* scores = new int[5]{90, 75};
    for (int i = 0; i < 5; ++i) {
        std::cout << scores[i] << ' ';
    }
    std::cout << '\n';
    delete[] scores;
}
