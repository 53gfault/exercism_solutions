#if !defined(SAY_H)
#define SAY_H
#include <algorithm> 
#include <iostream>
#include <map>
#include <cmath>
#include <stdexcept>
#include <string>
#include <vector>

namespace say {
    const long long MAX_VAL = 999999999999;
    const std::map<int, std::string> part_strings_ {
        {0, ""}, {1, "thousand"}, {2, "million"}, {3, "billion"}
    };
    const std::vector<std::string> units_strings_ {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    const std::vector<std::string> teens_strings_ {
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
        "seventeen", "eighteen", "nineteen"
    };
    const std::vector<std::string> tens_strings_ {
        "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty",
        "ninety"
    };
    inline void validate(long long num) {
        if(num < 0 or num > MAX_VAL)
            throw std::domain_error("Unsupported value");
    }
    std::string get_units_tens_string(const int&);
    std::string get_part_string(const int&, int);
    std::string in_english(long long);
}  // namespace say

#endif // SAY_H