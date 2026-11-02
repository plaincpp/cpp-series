// example: ex30_unordered_lookup_cost
// purpose: Count key compares in unordered_map find with a good hash and with a hash that puts all keys in one bucket.
// expect: ok
#include <cstddef>
#include <functional>
#include <iostream>
#include <unordered_map>

int equal_calls = 0;

struct CountingEqual {
    bool operator()(int a, int b) const {
        ++equal_calls;
        return a == b;
    }
};

struct GoodHash {
    std::size_t operator()(int key) const { return std::hash<int>{}(key); }
};

struct BadHash {
    std::size_t operator()(int) const { return 0; }
};

template <typename Hash>
int average_compares(int size) {
    std::unordered_map<int, int, Hash, CountingEqual> table;
    for (int key = 0; key < size; ++key) {
        table.emplace(key, key);
    }
    equal_calls = 0;
    for (int key = 0; key < size; ++key) {
        table.find(key);
    }
    return equal_calls / size;
}

int main() {
    std::cout << "good hash, 1000 keys: " << average_compares<GoodHash>(1000) << '\n';
    std::cout << "bad hash, 1000 keys: " << average_compares<BadHash>(1000) << '\n';
}
