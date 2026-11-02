// example: ex25_constexpr_variable
// purpose: Use constexpr variables as values that the compiler knows.
// expect: ok
// in-video: yes
#include <array>
#include <iostream>
constexpr int days_per_week = 7;
constexpr int hours_per_week = days_per_week * 24;
int main() {
    std::array<int, days_per_week> hours{};
    static_assert(hours_per_week == 168);
    std::cout << hours.size() << ' ' << hours_per_week << '\n';
}
