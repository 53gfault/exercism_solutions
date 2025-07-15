#include "hexadecimal.h"

int hexadecimal::convert(const std::string& input) {
    int sz = input.size(), output = 0;
    for(const char& ch: input)
        if(!std::isxdigit(ch)) return 0;
        else
            output += std::pow(16, sz-- - 1) * (std::isdigit(ch) ? ch - '0' : ch - 'a' + 10);
    return output;
}