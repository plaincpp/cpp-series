// example: ex14_build_type_ndebug
// purpose: Show that the Release build type defines NDEBUG and the Debug build type does not.
// expect: ok
#include <iostream>

int main() {
#ifdef NDEBUG
    std::cout << "NDEBUG is set: assert does nothing\n";
#else
    std::cout << "NDEBUG is not set: assert checks\n";
#endif
}
