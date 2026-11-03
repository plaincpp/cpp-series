// example: ex18_null_from_caller
// purpose: Give a crash in a function that gets a null pointer from its caller (checkpoint 3).
// expect: ub
// expect-match: null pointer
// flags: -g -O0
// in-video: yes
int first_of(const int* values) {
    return values[0];
}

const int* load(int count) {
    static const int data[]{4, 8, 15};
    return count > 0 ? data : nullptr;
}

int main() {
    const int* values = load(0);
    return first_of(values);
}
