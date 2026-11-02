// example: ex08_vector_large_fix
// purpose: Use std::vector to keep a large array in dynamic storage, not on the stack.
// in-video: yes
// expect: ok
// stdin: 4000000
#include <iostream>
#include <vector>

int main() {
    int count = 0;
    std::cin >> count;
    std::vector<int> readings(4'000'000);
    for (int i = 0; i < count; ++i) {
        readings[i] = i;
    }
    std::cout << readings[count - 1] << '\n';
}
