// example: ex22_file_handle_copy_error
// purpose: Show that a FileHandle with deleted copy operations cannot be copied.
// expect: compile-error
// expect-match: deleted
#include <cstdio>
class FileHandle {
    std::FILE* file_;
public:
    explicit FileHandle(std::FILE* file) : file_{file} {}
    ~FileHandle() { if (file_) std::fclose(file_); }
    FileHandle(const FileHandle&) = delete;
    FileHandle& operator=(const FileHandle&) = delete;
};
int main() {
    FileHandle a{std::tmpfile()};
    FileHandle b = a;
}
