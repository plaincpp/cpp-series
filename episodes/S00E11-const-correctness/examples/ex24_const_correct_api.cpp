// example: ex24_const_correct_api
// purpose: Use const member functions and a const reference parameter in a small class.
// expect: ok
#include <iostream>
#include <string>
#include <vector>
class Playlist {
public:
    void add(const std::string& song) { songs_.push_back(song); }
    int size() const { return static_cast<int>(songs_.size()); }
    const std::string& at(int i) const { return songs_[i]; }
private:
    std::vector<std::string> songs_;
};
void print(const Playlist& list) {
    for (int i = 0; i < list.size(); ++i) {
        std::cout << i + 1 << ". " << list.at(i) << '\n';
    }
}
int main() {
    Playlist list;
    list.add("Intro");
    list.add("Theme");
    print(list);
}
