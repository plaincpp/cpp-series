// example: ex31_unordered_buckets
// purpose: Show that unordered_map adds buckets as it grows, so the load factor stays at 1.0 or less.
// expect: ok
#include <cstddef>
#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, int> table;
    std::cout << "max_load_factor: " << table.max_load_factor() << '\n';
    std::size_t first_buckets = 0;
    for (int key = 0; key < 1000; ++key) {
        table[key] = key;
        if (key == 0) {
            first_buckets = table.bucket_count();
        }
    }
    std::cout << std::boolalpha;
    std::cout << "more buckets: " << (table.bucket_count() > first_buckets) << '\n';
    std::cout << "buckets >= size: " << (table.bucket_count() >= table.size()) << '\n';
    std::cout << "load_factor <= 1: " << (table.load_factor() <= 1.0f) << '\n';
}
