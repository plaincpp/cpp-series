// example: ex20_error_text_status_zero
// purpose: Show that an error message does not change the exit status: the end of main gives 0.
// expect: ok
#include <iostream>

int main() {
    std::cerr << "error: file not found\n";
}
