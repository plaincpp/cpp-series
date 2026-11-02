// example: ex11_guard_name_clash_pitfall
// purpose: Show that two headers with the same guard name hide the second header.
// expect: compile-error
// in-video: yes
// expect-match: days_in_year
#include <iostream>
#include "percent.h"
#include "calendar.h"

int main() {
    std::cout << clamp_percent(120) << '\n';
    std::cout << days_in_year(2024) << '\n';
}
