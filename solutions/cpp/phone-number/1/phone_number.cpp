#include "phone_number.h"
#include <algorithm>
#include <cctype>
#include <stdexcept>

namespace phone_util{
static constexpr int MAX_DIGITS = 11;
static constexpr int MIN_DIGITS = 10;
std::string filter_digits(const std::string& number) {
    std::string out_number;
    std::for_each(number.begin(), number.end(), [&out_number](const char& num) {
        if (isdigit(num)) out_number.push_back(num);
    });
    return out_number;
}
void validate_size(const std::string& number) {
    if (number.size() == MAX_DIGITS) {
        if (number[0] != '1') throw std::domain_error("Incorrect area code");
    } else if (number.size() != MIN_DIGITS) {
        throw std::domain_error("Incorrect number of digits");
    }
}
void validate_digits(const std::string& number) {
    if (number[0] - '0' < 2 || number[3] - '0' < 2) {
        throw std::domain_error("Incorrect digits");
    }
}
std::string get_valid_number(const std::string& number) {
    std::string filtered_number = filter_digits(number);
    validate_size(filtered_number);
    if (filtered_number.size() == MAX_DIGITS) {
        filtered_number = filtered_number.substr(1);
    }
    validate_digits(filtered_number);
    return filtered_number;
}
} // phone_util namespace
namespace phone_number {
phone_number::phone_number(const std::string& number)
    : number_(phone_util::get_valid_number(number)) {}
std::string phone_number::number() const {
    return number_;
}
} // namespace phone_number