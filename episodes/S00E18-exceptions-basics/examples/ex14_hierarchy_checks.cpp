// example: ex14_hierarchy_checks
// purpose: Prove the standard exception hierarchy with static_assert and std::is_base_of_v.
// expect: ok
#include <iostream>
#include <new>
#include <stdexcept>
#include <type_traits>

int main() {
    static_assert(std::is_base_of_v<std::exception, std::logic_error>);
    static_assert(std::is_base_of_v<std::exception, std::runtime_error>);
    static_assert(std::is_base_of_v<std::logic_error, std::invalid_argument>);
    static_assert(std::is_base_of_v<std::logic_error, std::out_of_range>);
    static_assert(std::is_base_of_v<std::logic_error, std::length_error>);
    static_assert(std::is_base_of_v<std::runtime_error, std::range_error>);
    static_assert(std::is_base_of_v<std::runtime_error, std::overflow_error>);
    static_assert(std::is_base_of_v<std::exception, std::bad_alloc>);
    static_assert(!std::is_base_of_v<std::runtime_error, std::out_of_range>);
    std::cout << "all checks pass\n";
}
