// example: ex21_namespace_fix
// purpose: Use a namespace for each library so that the two class names do not clash.
// expect: ok
// in-video: yes
#include <iostream>
#include "network.h"
#include "storage.h"

int main() {
    network::Config net{8080};
    storage::Config disk{"/var/data"};
    std::cout << net.port << ' ' << disk.path << '\n';
}
