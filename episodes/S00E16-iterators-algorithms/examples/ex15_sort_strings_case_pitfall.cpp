// example: ex15_sort_strings_case_pitfall
// purpose: Show that std::sort puts uppercase letters before lowercase letters, and fix it with a comparator function.
// expect: ok
#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

std::string lower(std::string text) {
    for (char& c : text) {
        c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    }
    return text;
}

bool less_ignore_case(const std::string& a, const std::string& b) {
    return lower(a) < lower(b);
}

void print(const std::vector<std::string>& names) {
    for (const std::string& name : names) {
        std::cout << name << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<std::string> names{"bo", "Cy", "ali", "Dee"};
    std::sort(names.begin(), names.end());
    print(names);
    std::sort(names.begin(), names.end(), less_ignore_case);
    print(names);
}
