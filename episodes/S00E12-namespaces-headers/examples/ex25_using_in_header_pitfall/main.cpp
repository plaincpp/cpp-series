// example: ex25_using_in_header_pitfall
// purpose: Show that using namespace in a header breaks a file that includes the header.
// expect: compile-error
// expect-match: reference to 'size' is ambiguous
// in-video: yes
#include <iostream>
#include "report.h"

int size = 3;

int main() {
    std::cout << make_title("sales") << '\n';
    std::cout << size << '\n';
}
