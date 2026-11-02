// example: ex36_using_namespace_distance
// purpose: Show that using namespace std makes the global name distance ambiguous.
// expect: compile-error
// expect-match: reference to 'distance' is ambiguous
#include <iostream>
#include <iterator>
using namespace std;

int distance = 0;

int main() {
    distance = distance + 5;
    cout << distance << '\n';
}
