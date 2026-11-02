// example: ex08_new_array_runtime_size
// purpose: Use new[] to make an array with a size that the program reads at run time, and free it with delete[].
// expect: ok
// stdin: 4
// in-video: yes
#include <cstddef>
#include <iostream>
int main() {
    std::size_t count = 0;
    std::cin >> count;
    int* scores = new int[count]{};
    for (std::size_t i = 0; i < count; ++i) {
        scores[i] = static_cast<int>(i) * 10;
    }
    std::cout << count << " scores, last " << scores[count - 1] << '\n';
    delete[] scores;
}
