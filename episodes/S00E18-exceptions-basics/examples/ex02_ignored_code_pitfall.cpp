// example: ex02_ignored_code_pitfall
// purpose: Show that a caller can ignore an error code, so the program uses an old value and continues.
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
    average(90, 0, value);
    std::cout << "average " << value << '\n';
}
