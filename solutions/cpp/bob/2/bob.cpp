#include "bob.h"

std::string bob::hey(const std::string& hello) {
    std::string new_str = util::strip(hello);
    if(new_str.empty())
        return "Fine. Be that way!";
    const bool is_shouting = util::isUpper(new_str);
    const bool is_question = new_str.back() == '?';
    if(is_shouting && is_question)
        return "Calm down, I know what I'm doing!";
    else if(is_shouting)
        return "Whoa, chill out!";
    else if(is_question)
        return "Sure.";
    return "Whatever.";
}