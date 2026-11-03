// example: ex27_strong_guarantee
// purpose: Compare memberwise assignment and copy-and-swap when the copy of a member throws.
// expect: ok
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

// A member whose copy can fail, as a copy that cannot get memory.
struct Photo {
    bool broken = false;
    Photo() = default;
    explicit Photo(bool is_broken) : broken{is_broken} {}
    Photo(const Photo& other) : broken{other.broken} {
        if (broken) {
            throw std::runtime_error{"copy failed"};
        }
    }
    Photo(Photo&&) noexcept = default;
    Photo& operator=(const Photo& other) {
        if (other.broken) {
            throw std::runtime_error{"copy failed"};
        }
        broken = other.broken;
        return *this;
    }
    Photo& operator=(Photo&&) noexcept = default;
    ~Photo() = default;
};

// The implicit copy assignment assigns one member, then the next member.
struct Profile {
    std::string name;
    Photo photo;
};

// Copy-and-swap: the copy is complete before the target changes.
struct SafeProfile {
    std::string name;
    Photo photo;
    SafeProfile(std::string n, Photo p) : name{std::move(n)}, photo{std::move(p)} {}
    SafeProfile(const SafeProfile&) = default;
    SafeProfile(SafeProfile&&) noexcept = default;
    SafeProfile& operator=(SafeProfile other) noexcept {
        std::swap(name, other.name);
        std::swap(photo, other.photo);
        return *this;
    }
    ~SafeProfile() = default;
};

int main() {
    Profile target{"old", Photo{}};
    const Profile source{"new", Photo{true}};
    try {
        target = source;
    } catch (const std::runtime_error&) {
        std::cout << "memberwise: copy failed, name is " << target.name << '\n';
    }

    SafeProfile safe_target{"old", Photo{}};
    const SafeProfile safe_source{"new", Photo{true}};
    try {
        safe_target = safe_source;
    } catch (const std::runtime_error&) {
        std::cout << "copy-and-swap: copy failed, name is " << safe_target.name << '\n';
    }
}
