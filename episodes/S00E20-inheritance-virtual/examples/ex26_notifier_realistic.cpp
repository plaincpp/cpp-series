// example: ex26_notifier_realistic
// purpose: Use an abstract Notifier interface so that one function sends an alert through two channels.
// expect: ok
// in-video: no
#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>
class Notifier {
public:
    virtual ~Notifier() = default;
    virtual void send(const std::string& text) const = 0;
};
class EmailNotifier : public Notifier {
public:
    explicit EmailNotifier(std::string address) : address_{std::move(address)} {}
    void send(const std::string& text) const override {
        std::cout << "email to " << address_ << ": " << text << '\n';
    }
private:
    std::string address_;
};
class SmsNotifier : public Notifier {
public:
    explicit SmsNotifier(std::string number) : number_{std::move(number)} {}
    void send(const std::string& text) const override {
        std::cout << "sms to " << number_ << ": " << text << '\n';
    }
private:
    std::string number_;
};
void alert_all(const std::vector<std::unique_ptr<Notifier>>& channels, const std::string& text) {
    for (const auto& channel : channels) {
        channel->send(text);
    }
}
int main() {
    std::vector<std::unique_ptr<Notifier>> channels;
    channels.push_back(std::make_unique<EmailNotifier>("ops@example.com"));
    channels.push_back(std::make_unique<SmsNotifier>("555-0100"));
    alert_all(channels, "disk is 90 percent full");
}
