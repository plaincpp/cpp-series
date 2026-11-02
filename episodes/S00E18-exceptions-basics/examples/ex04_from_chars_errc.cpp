// example: ex04_from_chars_errc
// purpose: Use std::from_chars, a standard function that reports an error with a std::errc code and no exception.
// expect: ok
#include <charconv>
#include <iostream>
#include <string>
#include <system_error>

void parse(const std::string& text) {
    int value = 0;
    auto [end, error] = std::from_chars(text.data(), text.data() + text.size(), value);
    if (error == std::errc::invalid_argument) {
        std::cout << text << ": not a number\n";
    } else if (error == std::errc::result_out_of_range) {
        std::cout << text << ": too large for int\n";
    } else {
        std::cout << text << ": " << value << '\n';
    }
}

int main() {
    parse("42");
    parse("abc");
    parse("99999999999");
}
