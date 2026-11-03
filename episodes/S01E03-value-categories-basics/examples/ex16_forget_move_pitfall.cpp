// example: ex16_forget_move_pitfall
// purpose: Show that a named rvalue reference parameter copies until you give it to the next function with std::move.
// expect: ok
// in-video: yes
#include <iostream>
#include <utility>
struct Track {
    Track() = default;
    Track(const Track&) { std::cout << "copy\n"; }
    Track(Track&&) noexcept { std::cout << "move\n"; }
};
void play(Track) {}
void add_bug(Track&& track)   { play(track); }
void add_fixed(Track&& track) { play(std::move(track)); }
int main() {
    add_bug(Track{});
    add_fixed(Track{});
}
