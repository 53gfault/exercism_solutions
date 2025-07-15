#include "rotational_cipher.h"

std::string
rotational_cipher::rotate(const std::string& to_encode, const int& pos) {
    std::string encoded;
    int shift = pos % 26;
    encoded.reserve(to_encode.size());
    for (const char& ch : to_encode) {
        if (!std::isalpha(ch)) {
            encoded.push_back(ch);
            continue;
        }

        char base = std::islower(ch) ? 'a' : 'A';
        char new_char = static_cast<char>(base + (ch - base + shift) % 26);
        encoded.push_back(new_char);
    }
    return encoded;
}