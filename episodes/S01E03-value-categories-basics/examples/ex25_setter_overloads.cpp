// example: ex25_setter_overloads
// purpose: Use a const std::string& overload and a std::string&& overload in a setter.
// expect: ok
#include <iostream>
#include <string>
#include <utility>

class Player {
public:
    void set_name(const std::string& name) {
        std::cout << "copy name\n";
        name_ = name;
    }
    void set_name(std::string&& name) {
        std::cout << "move name\n";
        name_ = std::move(name);
    }
    const std::string& name() const { return name_; }
private:
    std::string name_;
};

int main() {
    Player player;
    std::string typed = "Ada";
    player.set_name(typed);
    player.set_name(typed + " L.");
    player.set_name(std::string("Grace"));
    std::cout << player.name() << ' ' << typed << '\n';
}
