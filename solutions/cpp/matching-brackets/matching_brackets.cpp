#include "matching_brackets.h"

bool
matching_brackets::check(std::string input) {
    std::vector<char> brackets;
    std::unordered_map<char, char> matches {
        {')', '('}, {'}', '{'}, {']', '['}
    };
    for(const char& ch: input) {
        if(ch == '(' || ch == '{' || ch == '[')
            brackets.emplace_back(ch);
        if(ch == ')' || ch == '}' || ch == ']') {
            if(brackets.empty() || brackets.back() != matches[ch])
                return false;
            brackets.pop_back();
        }
    }
    return brackets.size() == 0;
}