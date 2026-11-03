// example: ex27_playlist_add_realistic
// purpose: Use a const Track& overload and a Track&& overload to copy or move a track into a playlist.
// expect: ok
#include <iostream>
#include <utility>
#include <vector>

struct Track {
    Track() = default;
    Track(const Track&) { std::cout << "copy\n"; }
    Track(Track&&) noexcept { std::cout << "move\n"; }
};

class Playlist {
public:
    Playlist() { items_.reserve(4); }
    void add(const Track& t) { items_.push_back(t); }
    void add(Track&& t) { items_.push_back(std::move(t)); }
    void add_bug(Track&& t) { items_.push_back(t); }
    std::size_t size() const { return items_.size(); }
private:
    std::vector<Track> items_;
};

int main() {
    Playlist list;
    Track saved;
    list.add(saved);
    list.add(Track{});
    list.add(std::move(saved));
    list.add_bug(Track{});
    std::cout << list.size() << " tracks\n";
}
