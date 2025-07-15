#include "luhn.h"

bool luhn::valid(const std::string& input){
    int sum{0}, digits{0};
    for(size_t i = 0; i < input.size(); i++) {
        const char& char_at_index = input[input.size() - i - 1];
        if(std::isspace(char_at_index))
            continue;
        if(!std::isdigit(char_at_index))
            return false;     
        int digit = char_at_index - '0';
        sum += digits++ & 1 ? (digit << 1) - ((digit > 4) * 9) : digit;
    }
    return digits < 2 ? false : sum % 10 == 0;
}