// example: ex04_data_model
// purpose: Check the LP64 data model of x86-64 Linux at compile time; capture.sh builds it for other targets.
// expect: ok
// in-video: yes
static_assert(sizeof(int) == 4, "int has 4 bytes");
static_assert(sizeof(long) == 8, "long has 8 bytes");
static_assert(sizeof(void*) == 8, "a pointer has 8 bytes");
static_assert(char(-1) < 0, "char is signed");

int main() {}
