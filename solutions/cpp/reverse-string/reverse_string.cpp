#include "reverse_string.h"

std::string reverse_string::reverse_string(const std::string& old_str) {
    std::string rev_str{old_str};
    std::reverse(rev_str.begin(), rev_str.end());
    return rev_str;
}