#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <string>
#include <cctype>

namespace atbash_cipher {
    const int GROUP_LENGTH = 5;
    const char DELIM = ' ';
    char atbash_char(const char&);
    std::string encode(const std::string&);
    std::string decode(const std::string&);
}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H