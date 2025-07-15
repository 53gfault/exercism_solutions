#include "armstrong_numbers.h"

bool
armstrong_numbers::is_armstrong_number(int num) {
    std::string str_num = std::to_string(num);
    int res = 0, power = str_num.size();
    for(const char& ch: str_num)
        res += std::pow(ch - '0', power);
    return num == res;
}