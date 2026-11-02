// example: ex21_const_overload
// purpose: Show that a const object calls the const overload of a member function.
// expect: ok
#include <iostream>
class Scores {
    int values_[3] = {7, 8, 9};
public:
    int& at(int i) {
        std::cout << "non-const at\n";
        return values_[i];
    }
    const int& at(int i) const {
        std::cout << "const at\n";
        return values_[i];
    }
};
int main() {
    Scores scores;
    scores.at(0) = 70;
    const Scores& view = scores;
    int first = view.at(0);
    std::cout << first << '\n';
}
