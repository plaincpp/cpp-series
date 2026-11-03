// example: ex17_short_const_string
// purpose: Show in a few lines that a "move" from a const string keeps the source text.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>
#include <utility>
int main() {
    const std::string name = "Grace Brewster Hopper";
    std::string other = std::move(name);
    std::cout << name.size() << ' ' << other.size() << '\n';
}
