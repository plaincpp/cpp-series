// example: ex21_conversion_rank_rules
// purpose: Prove the result types of the usual arithmetic conversions on x86-64 Linux (LP64).
// expect: ok
#include <iostream>
#include <type_traits>

template <typename A, typename B, typename Want>
void check(const char* text) {
    using Got = decltype(A{} + B{});
    std::cout << text << ": " << std::is_same_v<Got, Want> << '\n';
}

int main() {
    std::cout << std::boolalpha;
    check<char, char, int>("char + char -> int");
    check<short, short, int>("short + short -> int");
    check<int, unsigned, unsigned>("int + unsigned -> unsigned");
    check<int, long, long>("int + long -> long");
    check<unsigned, long, long>("unsigned + long -> long");
    check<long, unsigned long, unsigned long>("long + unsigned long -> unsigned long");
    check<unsigned long, long long, unsigned long long>(
        "unsigned long + long long -> unsigned long long");
    check<long long, float, float>("long long + float -> float");
    check<float, double, double>("float + double -> double");
}
