// example: ex01_vector_basics
// purpose: Use std::vector to add elements with push_back and read them with an index and a range-for loop.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores{90, 85};
    scores.push_back(77);
    scores.push_back(60);
    std::cout << "size: " << scores.size() << '\n';
    std::cout << "first: " << scores[0] << '\n';
    std::cout << "last: " << scores.back() << '\n';
    for (int score : scores) {
        std::cout << score << '\n';
    }
}
