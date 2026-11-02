// example: ex14_thread_local_counter
// purpose: Show that each thread has its own copy of a thread_local variable.
// expect: ok
#include <iostream>
#include <thread>

thread_local int calls = 0;
int results[2];

void work(int slot) {
    for (int i = 0; i < 3; ++i) {
        ++calls;
    }
    results[slot] = calls;
}

int main() {
    std::thread first(work, 0);
    std::thread second(work, 1);
    first.join();
    second.join();
    std::cout << results[0] << ' ' << results[1] << '\n';
    std::cout << "main: " << calls << '\n';
}
