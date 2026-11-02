// example: ex15_closure_as_class
// purpose: Compare a lambda with the class that the compiler makes for it: a member and operator().
// expect: ok
// in-video: yes
#include <iostream>

struct AboveLimit {
    int limit;
    bool operator()(int x) const { return x > limit; }
};

int main() {
    int limit = 10;
    auto lambda = [limit](int x) { return x > limit; };
    AboveLimit object{limit};
    std::cout << lambda(50) << ' ' << object(50) << '\n';
    std::cout << lambda(5) << ' ' << object(5) << '\n';
}
