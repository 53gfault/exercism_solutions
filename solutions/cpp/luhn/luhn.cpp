#include "luhn.h"

bool
luhn::valid_char(const char& ch) {
    return std::isspace(ch) || std::isdigit(ch);
}

bool
luhn::valid(const std::string& input){
    int sum{0}, digits{0};
    for(size_t i = 0; i < input.size(); i++) {
        const char& char_at_index = input[input.size() - i - 1];
        if(!luhn::valid_char(char_at_index))
            return false;
        if(std::isspace(char_at_index))
            continue;
        int digit = char_at_index - '0';
        if(digits % 2 == 0 ) sum += digit;
        else sum += 2 * digit > 9 ? 2 * digit - 9: 2 * digit;
        digits++;
    }
    if (digits < 2) return false;
    return sum % 10 == 0;
}