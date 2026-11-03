// example: ex36_overloads_ambiguous_error
// purpose: Show that three normal overloads of max_of make max_of(3, 2.5) ambiguous: int wins for one argument, double for the other.
// expect: compile-error
// expect-match: ambiguous
// in-video: no
#include <iostream>
#include <string>
int max_of(int a, int b) { return a < b ? b : a; }
double max_of(double a, double b) { return a < b ? b : a; }
std::string max_of(std::string a, std::string b) { return a < b ? b : a; }
int main() {
    std::cout << max_of(3, 2.5) << '\n';
}
