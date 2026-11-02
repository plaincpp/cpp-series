// example: ex36_node_reference_stable
// purpose: Show that a reference to a map or unordered_map value stays valid after many inserts.
// expect: ok
#include <cstddef>
#include <iostream>
#include <map>
#include <unordered_map>

int main() {
    std::map<int, int> sorted{{0, 42}};
    std::unordered_map<int, int> hashed{{0, 7}};
    int& in_sorted = sorted.at(0);
    int& in_hashed = hashed.at(0);
    std::size_t first_buckets = hashed.bucket_count();
    for (int key = 1; key <= 1000; ++key) {
        sorted[key] = key;
        hashed[key] = key;
    }
    std::cout << std::boolalpha;
    std::cout << "rehashed: " << (hashed.bucket_count() != first_buckets) << '\n';
    std::cout << in_sorted << ' ' << in_hashed << '\n';
}
