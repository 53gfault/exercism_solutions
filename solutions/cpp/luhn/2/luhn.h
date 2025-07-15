#if !defined(LUHN_H)
#define LUHN_H
#include <cctype>
#include <string>

namespace luhn {
    bool valid(const std::string& input);
}  // namespace luhn

#endif // LUHN_H