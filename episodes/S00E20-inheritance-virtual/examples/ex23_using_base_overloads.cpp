// example: ex23_using_base_overloads
// purpose: Use a using-declaration to bring the hidden base functions back into the derived class.
// expect: ok
// in-video: no
#include <iostream>
#include <string>
struct Logger {
    void log(int code) { std::cout << "code " << code << '\n'; }
};
struct FileLogger : Logger {
    using Logger::log;
    void log(const std::string& text) { std::cout << text << '\n'; }
};
int main() {
    FileLogger logger;
    logger.log(404);
    logger.log("not found");
}
