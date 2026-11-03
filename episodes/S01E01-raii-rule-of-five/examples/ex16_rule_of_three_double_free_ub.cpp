// example: ex16_rule_of_three_double_free_ub
// purpose: Show that a class with only a destructor copies its pointer, and both copies delete the same array.
// expect: ub
// expect-match: attempting double-free
// stdin: 4
// in-video: yes
#include <iostream>
class Buffer {
    int* data_;
public:
    explicit Buffer(int size) : data_{new int[size]{}} {}
    ~Buffer() { delete[] data_; }
};
int main() {
    int size = 0;
    std::cin >> size;
    Buffer a{size};
    Buffer b = a;
}
