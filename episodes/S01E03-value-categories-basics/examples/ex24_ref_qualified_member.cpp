// example: ex24_ref_qualified_member
// purpose: Use & and && qualifiers on a member function to copy from an lvalue and move from an rvalue.
// expect: ok
#include <iostream>
#include <string>
#include <utility>

class Report {
public:
    explicit Report(std::string text) : text_(std::move(text)) {}
    std::string take_text() const& {
        std::cout << "copy text\n";
        return text_;
    }
    std::string take_text() && {
        std::cout << "move text\n";
        return std::move(text_);
    }
private:
    std::string text_;
};

int main() {
    Report daily{"daily totals"};
    std::string a = daily.take_text();
    std::string b = Report{"weekly totals"}.take_text();
    std::string c = std::move(daily).take_text();
    std::cout << a << " | " << b << " | " << c << '\n';
}
