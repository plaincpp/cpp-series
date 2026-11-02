// example: ex20_switch_enum_warning
// purpose: Show that -Wall warns when a switch on an enumeration has no case for one value.
// expect: ok
#include <iostream>

enum class Light { red, yellow, green };

int main() {
    Light light = Light::green;
    switch (light) {
    case Light::red:
        std::cout << "stop\n";
        break;
    case Light::yellow:
        std::cout << "slow down\n";
        break;
    }
    std::cout << "end\n";
}
