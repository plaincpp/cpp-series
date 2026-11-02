// example: ex24_using_namespace_ambiguous
// purpose: Show that using namespace std makes a global name ambiguous.
// expect: compile-error
// expect-match: reference to 'count' is ambiguous
// in-video: yes
#include <algorithm>
#include <iostream>
using namespace std;

int count = 0;

int main() {
    count = count + 1;
    cout << count << '\n';
}
