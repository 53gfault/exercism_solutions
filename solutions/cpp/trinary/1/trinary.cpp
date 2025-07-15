#include "trinary.h"

int
trinary::to_decimal(const std::string& num) {
    int res{0};
    int pos = num.size() - 1;
    for(const char& ch: num) {
        if(!std::isdigit(ch))
            return 0;
        res += std::pow(3, pos--) * (ch - '0');
    }
    return res;
}