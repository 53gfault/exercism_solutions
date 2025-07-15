#include "say.h"

std::string
say::get_units_tens_string(const int& num) {
    std::cout << "Units-tens part: " << num << std::endl;
    if(num < 10)
        return units_strings_.at(num);
    if(num < 20)
        return teens_strings_.at(num - 10);
    if(num % 10 == 0)
        return tens_strings_.at(num / 10 - 2);
    return tens_strings_.at(num / 10 - 2) + "-" + units_strings_.at(num % 10);
}


std::string
say::get_part_string(const int& part_num, int part_index) {
    std::cout << "Part string: " << part_num << std::endl;
    if(part_num == 0)
        return "";
    std::string part_suffix = "";
    if(part_index > 0)
        part_suffix = " " + part_strings_.at(part_index);
    std::string part_prefix;
    if(part_num < 100)
        part_prefix = get_units_tens_string(part_num);
    else {
        part_prefix = units_strings_.at(part_num / 100) + " hundred";
        if(part_num % 100 != 0)
            part_prefix += " " + get_units_tens_string(part_num % 100);
    }
    return part_prefix + part_suffix;
    
}

std::string
say::in_english(long long num) {
    std::cout << "Received num: " << num << std::endl;
    say::validate(num);
    if(num < 100)
        return get_units_tens_string(num);
    std::string result, part_result;
    int part_num = 0, part_index = 0, digit_count = 0;
    while(num != 0){
        int rem = num % 10;
        part_num = rem * (int)pow(10, digit_count) + part_num;
        num /= 10;
        digit_count++;
        if(digit_count % 3 == 0) {
            part_result = get_part_string(part_num, part_index++);
            if(!part_result.empty() && !result.empty())
                part_result += " ";
            result = part_result + result;
            part_num = digit_count = 0;
        }
    }
    part_result = "";
    if(digit_count % 3 != 0){
        part_result = get_part_string(part_num, part_index++);
        if(!part_result.empty() && !result.empty())
            part_result += " ";
    }
    return part_result + result;
}