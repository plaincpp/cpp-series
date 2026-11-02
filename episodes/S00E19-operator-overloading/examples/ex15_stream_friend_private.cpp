// example: ex15_stream_friend_private
// purpose: Use a friend operator<< to print private members, to std::cout and to a std::ostringstream.
// expect: ok
// in-video: no
#include <iostream>
#include <sstream>
#include <string>
class Fraction {
    int num_;
    int den_;
public:
    Fraction(int num, int den) : num_{num}, den_{den} {}
    friend std::ostream& operator<<(std::ostream& out, const Fraction& f) {
        return out << f.num_ << '/' << f.den_;
    }
};
int main() {
    Fraction half{1, 2};
    std::cout << half << '\n';
    std::ostringstream text;
    text << Fraction{3, 4};
    std::string s = text.str();
    std::cout << s << ' ' << s.size() << '\n';
}
