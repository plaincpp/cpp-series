// example: ex01_raii_trace
// purpose: Show that a constructor gets a resource and the destructor releases it in reverse order.
// expect: ok
// in-video: yes
#include <iostream>
class Resource {
    const char* name_;
public:
    explicit Resource(const char* name) : name_{name} {
        std::cout << "acquire " << name_ << '\n';
    }
    ~Resource() { std::cout << "release " << name_ << '\n'; }
};
int main() {
    Resource file{"file"};
    Resource lock{"lock"};
    std::cout << "work\n";
}
