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
    const std::map<int, std::string> segments_ {
        {1, "thousand"}, {2, "million"}, {3, "billion"}
    };
    const std::vector<std::string> ones_ {
        "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    const std::vector<std::string> teens_ {
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
        "seventeen", "eighteen", "nineteen"
    };
    const std::vector<std::string> tens_ {
        "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty",
        "ninety"
    };
    inline void validate(long long num) {
        if(num < 0 or num > MAX_VAL)
            throw std::domain_error("Unsupported value");
    }
    std::string stringify_two_digits(const int&);
    std::string stringify_three_digits(const int&);
    std::string stringify_three_digits_chunk(const int&, const int&);
    int get_three_digits_chunk(long long&);
    std::string in_english(long long);
}  // namespace say

#endif // SAY_H