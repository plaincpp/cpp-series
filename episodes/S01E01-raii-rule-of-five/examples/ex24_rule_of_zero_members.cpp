// example: ex24_rule_of_zero_members
// purpose: Show that a class with std::string and std::vector members copies correctly with no special members.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>
#include <vector>
struct Document {
    std::string title;
    std::vector<int> pages;
};
int main() {
    Document a{"draft", {1, 2, 3}};
    Document b = a;
    b.pages.push_back(4);
    std::cout << a.title << ' ' << a.pages.size() << '\n';
    std::cout << b.title << ' ' << b.pages.size() << '\n';
}
