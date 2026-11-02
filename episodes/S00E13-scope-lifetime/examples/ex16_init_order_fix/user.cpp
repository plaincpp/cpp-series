#include <string>

const std::string& user_name() {
    static const std::string name = "Ada Lovelace, Countess of Lovelace";
    return name;
}
