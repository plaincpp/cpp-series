// example: ex14_std_move_is_cast
// purpose: Show that std::move gives an rvalue reference, and a static_cast to that type moves too.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>
#include <type_traits>
#include <utility>
int main() {
    std::string name = "Ada Lovelace";
    using T = decltype(std::move(name));
    static_assert(std::is_same_v<T, std::string&&>);
    std::string owner = static_cast<std::string&&>(name);
    std::cout << owner << '\n';
}
