// example: ex31_stoi_partial_short
// purpose: Show in a short program that std::stoi reads "80x" as 80 and does not throw.
// expect: ok
// in-video: yes
#include <cstddef>
#include <iostream>
#include <string>
int main() {
    std::size_t used = 0;
    int port = std::stoi("80x", &used);
    std::cout << port << ' ' << used << '\n';
}
