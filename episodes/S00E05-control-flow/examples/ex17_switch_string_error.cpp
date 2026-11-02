// example: ex17_switch_string_error
// purpose: Show that the switch condition must have an integer or enumeration type. A std::string fails.
// expect: compile-error
// expect-match: integer
#include <iostream>
#include <string>

int main() {
    std::string command = "stop";
    switch (command) {
    case "stop":
        std::cout << "stopping\n";
        break;
    }
}
