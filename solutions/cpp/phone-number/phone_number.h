#ifndef PHONE_NUMBER_H
#define PHONE_NUMBER_H
#include <string>

namespace phone_number {
class phone_number {
public:
    explicit phone_number(const std::string& number);
    std::string number() const;
private:
    std::string number_;
    static std::string get_valid(const std::string& number);
};
} // namespace phone_number
#endif // PHONE_NUMBER_H
