// example: ex22_nested_namespace_alias
// purpose: Use a nested namespace, open it two times and give it a short alias.
// expect: ok
#include <iostream>

namespace app::net {
int default_port() {
    return 8080;
}
}

namespace app::net {
int max_clients() {
    return 64;
}
}

namespace net = app::net;

int main() {
    std::cout << app::net::default_port() << ' ' << net::max_clients() << '\n';
}
