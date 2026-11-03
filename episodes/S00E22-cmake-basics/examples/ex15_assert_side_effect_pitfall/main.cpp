// example: ex15_assert_side_effect_pitfall
// purpose: Show that a function call in assert does not occur in a Release build.
// expect: ok
#include <cassert>
#include <iostream>

int load_count = 0;

bool load_settings() {
    ++load_count;
    return true;
}

int main() {
    assert(load_settings());
    std::cout << "settings loaded: " << load_count << '\n';
}
