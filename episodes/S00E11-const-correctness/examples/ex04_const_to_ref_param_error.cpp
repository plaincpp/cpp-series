// example: ex04_const_to_ref_param_error
// purpose: Show that a const object does not bind to a non-const reference parameter of a function that only reads.
// expect: compile-error
// expect-match: const Report
// in-video: yes
#include <iostream>
struct Report {
    int values[1000] = {};
};
void show(Report& report) {
    std::cout << report.values[0] << '\n';
}
int main() {
    const Report report;
    show(report);
}
