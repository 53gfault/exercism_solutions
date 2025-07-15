#include "bob.h"

std::string bob::hey(const std::string& hello) {
    std::string new_str = util::strip(hello);
    if(util::isUpper(new_str) && new_str.back() == '?')
        return "Calm down, I know what I'm doing!";
    else if(util::isUpper(new_str))
        return "Whoa, chill out!";
    else if(new_str.empty())
        return "Fine. Be that way!";
    else if(new_str.back() == '?')
        return "Sure.";
    return "Whatever.";
    
}