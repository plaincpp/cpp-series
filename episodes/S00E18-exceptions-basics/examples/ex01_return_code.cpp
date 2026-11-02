// example: ex01_return_code
// purpose: Use a bool return value as an error code, and give the result through a reference.
// expect: ok
// in-video: yes
#include <iostream>
bool average(int total, int count, int& out) {
    if (count == 0) return false;
    out = total / count;
    return true;
}
int main() {
    int value = 0;
    if (average(90, 0, value)) {
        std::cout << "average " << value << '\n';
    } else {
        std::cout << "error: count is 0\n";
    }
}
