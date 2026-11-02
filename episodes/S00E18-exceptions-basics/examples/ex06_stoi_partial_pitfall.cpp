// example: ex06_stoi_partial_pitfall
// purpose: Show that std::stoi stops at the first bad character and does not throw, so check the position.
// expect: ok
#include <cstddef>
#include <iostream>
#include <string>

int main() {
    std::string text = "80x";
    std::size_t used = 0;
    int port = std::stoi(text, &used);
    std::cout << "port " << port << '\n';
    std::cout << "used " << used << " of " << text.size() << '\n';
}
