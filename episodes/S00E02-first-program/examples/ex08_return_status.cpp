// example: ex08_return_status
// purpose: Show that the return value of main becomes the exit status.
// expect: runtime-error
// expect-match: Checking the input
// in-video: yes
#include <iostream>

int main() {
    std::cout << "Checking the input\n";
    return 3;
}
