// example: ex30_two_type_parameters
// purpose: Use a class template with two type parameters, like std::pair and std::map.
// expect: ok
// in-video: no
#include <iostream>
#include <string>
template <typename Key, typename Value>
struct Entry {
    Key key;
    Value value;
};
template <typename Key, typename Value>
void print(const Entry<Key, Value>& entry) {
    std::cout << entry.key << " = " << entry.value << '\n';
}
int main() {
    Entry<std::string, int> age{"Ana", 31};
    Entry<int, double> price{7, 2.5};
    print(age);
    print(price);
}
