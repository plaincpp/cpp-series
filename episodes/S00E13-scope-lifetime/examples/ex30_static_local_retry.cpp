// example: ex30_static_local_retry
// purpose: Show that the initializer of a static local runs again when its first run throws an exception.
// expect: ok
// in-video: no
#include <iostream>
#include <stdexcept>
int tries = 0;
int load_config() {
    ++tries;
    if (tries == 1) {
        throw std::runtime_error("no file");
    }
    return 7;
}
int get_config() {
    static int config = load_config();
    return config;
}
int main() {
    try {
        get_config();
    } catch (const std::exception&) {
        std::cout << "throw\n";
    }
    std::cout << get_config() << ' ' << tries << '\n';
}
