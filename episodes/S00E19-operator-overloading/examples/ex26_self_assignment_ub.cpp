// example: ex26_self_assignment_ub
// purpose: Show the self-assignment bug: operator= deletes the old array and then reads from it.
// expect: ub
// expect-match: heap-use-after-free
// stdin: 0
// in-video: yes
#include <iostream>
struct Buffer {
    int* data = new int[3]{};
    ~Buffer() { delete[] data; }
    Buffer& operator=(const Buffer& other) {
        delete[] data;
        data = new int[3]{other.data[0]};
        return *this;
    }
};
int main() {
    Buffer items[2];
    items[0] = items[std::cin.get() - '0'];
}
