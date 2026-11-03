// example: ex06_socket_fd_released
// purpose: Show that a socket owner returns the file descriptor to the system in its destructor.
// expect: ok
#include <iostream>
#include <sys/socket.h>
#include <unistd.h>
class Socket {
    int fd_;
public:
    Socket() : fd_{::socket(AF_UNIX, SOCK_STREAM, 0)} {}
    ~Socket() { if (fd_ >= 0) ::close(fd_); }
    Socket(const Socket&) = delete;
    Socket& operator=(const Socket&) = delete;
    int fd() const { return fd_; }
};
int main() {
    int first = 0;
    {
        Socket s;
        first = s.fd();
        std::cout << "open: " << (first >= 0) << '\n';
    }
    Socket again;
    std::cout << "same number again: " << (again.fd() == first) << '\n';
}
