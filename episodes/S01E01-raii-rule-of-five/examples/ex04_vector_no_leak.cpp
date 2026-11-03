// example: ex04_vector_no_leak
// purpose: Use a std::vector as the owner, so that a throw frees the memory.
// expect: ok
// in-video: yes
#include <iostream>
#include <stdexcept>
#include <vector>
void check(int value) {
    if (value < 0) throw std::invalid_argument{"negative"};
}
void process(int value) {
    std::vector<int> buffer(256);
    check(value);
}
int main() {
    try { process(-1); } catch (const std::exception&) {}
    std::cout << "no leak\n";
}
