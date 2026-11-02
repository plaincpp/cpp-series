// example: ex33_mutable_missing_error
// purpose: Show that the cache does not compile without mutable.
// expect: compile-error
// expect-match: cached
#include <iostream>
struct Report {
    int cached = 0;
    int total() const {
        if (cached == 0) {
            std::cout << "compute\n";
            cached = 3000;
        }
        return cached;
    }
};
int main() {
    const Report report;
    std::cout << report.total() + report.total() << '\n';
}
