#if !defined(LUHN_H)
#define LUHN_H
#include <algorithm>
#include <cctype>
#include <string>

namespace luhn {
    bool valid_char(const char& ch);
    bool valid(const std::string& input);
}  // namespace luhn

#endif // LUHN_H