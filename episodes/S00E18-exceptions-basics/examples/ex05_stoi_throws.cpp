// example: ex05_stoi_throws
// purpose: Show that std::stoi reports bad text with an exception, so the caller cannot ignore the error.
// expect: ok
// in-video: yes
#include <iostream>
#include <stdexcept>
#include <string>

int main() {
    try {
        int port = std::stoi("abc");
        std::cout << "port " << port << '\n';
    } catch (const std::invalid_argument&) {
        std::cout << "not a number\n";
    }
    std::cout << "done\n";
}
