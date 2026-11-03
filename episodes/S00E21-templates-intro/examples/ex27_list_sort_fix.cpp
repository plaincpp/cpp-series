// example: ex27_list_sort_fix
// purpose: Correct the std::sort error: std::list has its own sort member function.
// expect: ok
// in-video: yes
#include <iostream>
#include <list>
int main() {
    std::list<int> scores{30, 10, 20};
    scores.sort();
    for (int score : scores) {
        std::cout << score << '\n';
    }
}
