// example: ex28_static_destruction_order_fix
// purpose: Show that a constructor that calls config() first makes Config end after Logger.
// expect: ok
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
    Logger() { config(); }
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
