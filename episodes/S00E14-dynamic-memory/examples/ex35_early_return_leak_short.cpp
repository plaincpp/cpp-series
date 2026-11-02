// example: ex35_early_return_leak_short
// purpose: Show the early return leak of ex15 in a few short lines, for a vertical Short.
// expect: sanitizer
// expect-match: detected memory leaks
// in-video: yes
bool save(int value) {
    int* buffer = new int[4]{};
    if (value < 0) return false;
    buffer[0] = value;
    delete[] buffer;
    return true;
}
int main() {
    save(-1);
}
