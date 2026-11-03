// example: ex08_warning_flags
// purpose: Show that target_compile_options turns on the warnings that find a signed and unsigned compare.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores{70, 85, 90};
    int total = 0;
    for (int i = 0; i < scores.size(); ++i) {
        total += scores[i];
    }
    std::cout << "total: " << total << '\n';
}
