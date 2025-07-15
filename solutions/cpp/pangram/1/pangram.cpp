#include "pangram.h"

bool
pangram::is_pangram(const std::string& sentence) {
    std::unordered_set<char> chars;
    for(const char& ch: sentence) {
        if(std::isalpha(ch))
            chars.insert(std::tolower(ch));
    }
    return chars.size() == 26;
}
