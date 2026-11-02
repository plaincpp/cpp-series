// example: ex41_long_windows_constant
// purpose: Show that 5000000000 fits in long on x86-64 Linux; capture.sh builds it for 64-bit Windows, where Clang warns.
// expect: ok
long file_size = 5'000'000'000;

int main() {
    return file_size == 5'000'000'000 ? 0 : 1;
}
