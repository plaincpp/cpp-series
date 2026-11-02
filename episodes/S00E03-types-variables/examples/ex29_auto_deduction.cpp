// example: ex29_auto_deduction
// purpose: Prove at compile time the type that auto deduces from each kind of literal and initializer.
// expect: ok
#include <cstddef>
#include <iostream>
#include <type_traits>

int main() {
    auto a = 1;
    auto b = 1u;
    auto c = 1L;
    auto d = 1LL;
    auto e = 1uz;
    auto f = 1.0;
    auto g = 1.0f;
    auto h = 1.0L;
    auto i = 'a';
    auto j = "a";
    auto k = true;
    const int limit = 5;
    auto copy = limit;
    static_assert(std::is_same_v<decltype(a), int>);
    static_assert(std::is_same_v<decltype(b), unsigned int>);
    static_assert(std::is_same_v<decltype(c), long>);
    static_assert(std::is_same_v<decltype(d), long long>);
    static_assert(std::is_same_v<decltype(e), std::size_t>);
    static_assert(std::is_same_v<decltype(f), double>);
    static_assert(std::is_same_v<decltype(g), float>);
    static_assert(std::is_same_v<decltype(h), long double>);
    static_assert(std::is_same_v<decltype(i), char>);
    static_assert(std::is_same_v<decltype(j), const char*>);
    static_assert(std::is_same_v<decltype(k), bool>);
    static_assert(std::is_same_v<decltype(copy), int>);
    std::cout << "all types match\n";
}
