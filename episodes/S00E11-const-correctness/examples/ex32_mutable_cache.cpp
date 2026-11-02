// example: ex32_mutable_cache
// purpose: Use a mutable member to keep a cache in a const member function.
// expect: ok
// in-video: yes
#include <iostream>
struct Report {
    mutable int cached = 0;
    int total() const {
        if (cached != 0) return cached;
        std::cout << "compute\n";
        cached = 3000;
        return cached;
    }
};
int main() {
    const Report report;
    std::cout << report.total() + report.total() << '\n';
}
