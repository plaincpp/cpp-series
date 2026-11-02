// example: ex17_range_for_reference
// purpose: Show that a range-for loop changes the elements only through a reference.
// expect: ok
#include <iostream>
#include <vector>

void print(const std::vector<int>& scores) {
    for (const int& s : scores) std::cout << s << ' ';
    std::cout << '\n';
}

int main() {
    std::vector<int> scores{10, 20, 30};
    for (int s : scores) {
        s = s + 5;
    }
    print(scores);
    for (int& s : scores) {
        s = s + 5;
    }
    print(scores);
}
