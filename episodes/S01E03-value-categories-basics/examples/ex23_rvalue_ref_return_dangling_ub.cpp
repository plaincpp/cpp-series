// example: ex23_rvalue_ref_return_dangling_ub
// purpose: Show that an int&& from a function that returns its int&& parameter dangles after the statement.
// expect: ub
// expect-match: stack-use-after-scope
// stdin: 41
#include <iostream>
#include <utility>

int&& pass_on(int&& value) {
    return std::move(value);
}

int main() {
    int input = 0;
    std::cin >> input;
    int&& result = pass_on(input + 1);
    std::cout << result << '\n';
}
