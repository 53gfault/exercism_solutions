#include "say.h"


std::string
say::stringify_two_digits(const int& num) {
    if(num < 10)
        return ones_.at(num);
    if(num < 20)
        return teens_.at(num - 10);
    if(num % 10 == 0)
        return tens_.at(num / 10 - 1);
    return tens_.at(num / 10 - 1) + "-" + ones_.at(num % 10);
}

std::string
say::stringify_three_digits(const int& num) {
    if(num < 100)
        return stringify_two_digits(num);
    std::string result = ones_.at(num / 100) + " hundred";
    if(num % 100 != 0)
        result += " " + stringify_two_digits(num % 100);
    return result;
}


std::string
say::stringify_three_digits_chunk(const int& num, const int& segment) {
    std::string result = stringify_three_digits(num);
    if(result.empty() || !segment)
        return result;
    return result + " " + segments_.at(segment);
}

int
say::get_three_digits_chunk(long long& num) {
    int partial_num = 0, rem = 0;
    for (auto i : {0, 1, 2}) {
        rem = num % 10;
        partial_num = rem * (int)pow(10, i) + partial_num;
        num /= 10;
    }
    return partial_num;
}

std::string
say::in_english(long long num) {
    say::validate(num);
    if(!num)
        return "zero";
    std::string result, partial_result, delim = "";
    int segment = 0, partial_num = 0;
    do {
        partial_num = get_three_digits_chunk(num);
        partial_result = stringify_three_digits_chunk(partial_num, segment++);
        if(!result.empty() && !partial_result.empty())
            delim = " ";
        result = partial_result + delim + result;
        delim = "";
    } while(num != 0);
    return result;
}