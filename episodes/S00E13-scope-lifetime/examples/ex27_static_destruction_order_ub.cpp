// example: ex27_static_destruction_order_ub
// purpose: Show that a static local object that ends first is still used by the destructor of another static local object.
// expect: ub
// expect-match: heap-use-after-free
// in-video: no
#include <iostream>
#include <string>
struct Config {
    std::string path = "/etc/plaincpp/settings-for-the-logger.conf";
    ~Config() { std::cout << "end Config\n"; }
};
Config& config() {
    static Config c;
    return c;
}
struct Logger {
    ~Logger() { std::cout << "end Logger: " << config().path << '\n'; }
};
Logger& logger() {
    static Logger l;
    return l;
}
int main() {
    logger();
    config();
}
