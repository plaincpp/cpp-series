// example: ex23_map_subscript_const_error
// purpose: Show that operator[] does not compile on a const map, because it can add a key.
// expect: compile-error
// expect-match: operator[]
// in-video: yes
#include <iostream>
#include <map>
#include <string>

void print_score(const std::map<std::string, int>& scores) {
    std::cout << scores["Ali"] << '\n';
}

int main() {
    print_score({{"Ali", 90}});
}
