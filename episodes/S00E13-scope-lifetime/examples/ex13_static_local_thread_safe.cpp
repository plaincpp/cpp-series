// example: ex13_static_local_thread_safe
// purpose: Show that a static local variable starts only one time when eight threads call its function.
// expect: ok
#include <atomic>
#include <iostream>
#include <thread>
#include <vector>

std::atomic<int> loads{0};
std::atomic<int> total{0};

int load_config() {
    ++loads;
    return 42;
}

int get_config() {
    static int config = load_config();
    return config;
}

void work() {
    total += get_config();
}

int main() {
    std::vector<std::thread> workers;
    for (int i = 0; i < 8; ++i) {
        workers.emplace_back(work);
    }
    for (std::thread& worker : workers) {
        worker.join();
    }
    std::cout << "loads: " << loads << '\n';
    std::cout << "total: " << total << '\n';
}
