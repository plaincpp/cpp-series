#pragma once
#include <cstdio>
#include <utility>
class FileHandle {
    std::FILE* file_ = nullptr;
public:
    explicit FileHandle(std::FILE* file) : file_{file} {}
    ~FileHandle() { if (file_) std::fclose(file_); }
    FileHandle(const FileHandle&) = delete;
    FileHandle& operator=(const FileHandle&) = delete;
    FileHandle(FileHandle&& other) noexcept
        : file_{std::exchange(other.file_, nullptr)} {}
    FileHandle& operator=(FileHandle&& other) noexcept {
        if (this != &other) {
            if (file_) std::fclose(file_);
            file_ = std::exchange(other.file_, nullptr);
        }
        return *this;
    }
    bool is_open() const { return file_ != nullptr; }
};
