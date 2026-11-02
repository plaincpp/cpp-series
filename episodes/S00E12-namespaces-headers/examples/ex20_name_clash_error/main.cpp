// example: ex20_name_clash_error
// purpose: Show that two libraries with the same class name do not compile together.
// expect: compile-error
// expect-match: redefinition of
#include <iostream>
#include "network.h"
#include "storage.h"

int main() {
    Config net{8080};
    std::cout << net.port << '\n';
}
