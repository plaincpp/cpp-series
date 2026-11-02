// example: ex30_erase_in_loop_fix
// purpose: Use the iterator that erase returns, so a loop that erases elements stays correct.
// expect: ok
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 12, 41, 17, 19};
    for (auto it = ages.begin(); it != ages.end();) {
        if (*it < 18) {
            it = ages.erase(it);
        } else {
            ++it;
        }
    }
    for (int age : ages) {
        std::cout << age << ' ';
    }
    std::cout << '\n';
}
