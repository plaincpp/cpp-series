// example: ex32_const_member_vector_growth
// purpose: Show that a const std::string member makes the implicit move constructor throwing, so vector growth copies every member.
// expect: ok
#include <cstddef>
#include <iostream>
#include <string>
#include <type_traits>
#include <vector>

struct Image {
    std::vector<std::byte> pixels;
    const std::string name;
};

struct ImageNoConst {
    std::vector<std::byte> pixels;
    std::string name;
};

// Grow a vector from capacity 1 to 2. Print if the move constructor of T is
// noexcept, and if the first element kept its pixel block (a move).
template <class T>
void grow(const char* label) {
    std::vector<T> images;
    images.reserve(1);
    images.push_back(T{std::vector<std::byte>(1000), "first"});
    const std::byte* before = images[0].pixels.data();
    images.push_back(T{std::vector<std::byte>(1000), "second"});
    std::cout << label << std::boolalpha
              << std::is_nothrow_move_constructible_v<T> << ' '
              << (images[0].pixels.data() == before) << '\n';
}

int main() {
    grow<Image>("const name: ");
    grow<ImageNoConst>("no const: ");
}
