// example: ex15_custom_exception
// purpose: Derive an exception class from std::runtime_error that keeps the line number of a parse error.
// expect: ok
#include <iostream>
#include <stdexcept>
#include <string>

class ParseError : public std::runtime_error {
public:
    ParseError(const std::string& message, int line)
        : std::runtime_error{message}, line_{line} {}
    int line() const { return line_; }
private:
    int line_;
};

void parse_line(const std::string& text, int line) {
    if (text.empty()) throw ParseError{"empty line", line};
}

int main() {
    try {
        parse_line("name=plain", 1);
        parse_line("", 2);
    } catch (const ParseError& e) {
        std::cout << "line " << e.line() << ": " << e.what() << '\n';
    } catch (const std::exception& e) {
        std::cout << "other error: " << e.what() << '\n';
    }
}
