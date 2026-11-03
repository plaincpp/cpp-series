// example: ex22_name_hiding_error
// purpose: Show that a function in a derived class hides all base functions with the same name.
// expect: compile-error
// expect-match: const std::string
// in-video: no
#include <iostream>
#include <string>
struct Logger {
    void log(int code) { std::cout << "code " << code << '\n'; }
};
struct FileLogger : Logger {
    void log(const std::string& text) { std::cout << text << '\n'; }
};
int main() {
    FileLogger logger;
    logger.log(404);
}
