// example: ex05_endl_flush
// purpose: Show that std::endl flushes the text, and that a crash loses text in the buffer.
// expect: runtime-error
// expect-match: step 1
// in-video: yes
#include <cstdlib>
#include <iostream>

int main() {
    std::cout << "step 1" << std::endl;
    std::cout << "step 2\n";
    std::abort();
}
