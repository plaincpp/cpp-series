// example: ex06_map_iterator_plus_error
// purpose: Show that a map iterator is bidirectional, so begin() + 1 does not compile.
// expect: compile-error
// expect-match: _Rb_tree
// in-video: yes
#include <map>
#include <string>

int main() {
    std::map<std::string, int> ages{{"Ali", 30}, {"Bo", 25}};
    auto second = ages.begin() + 1;
    return second->second;
}
