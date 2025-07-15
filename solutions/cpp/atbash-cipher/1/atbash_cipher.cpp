#include "atbash_cipher.h"

char atbash_cipher::atbash_char(const char& ch) {
    if (std::isalpha(ch)) {
        return 'z' - (std::tolower(ch) - 'a');
    }
    return ch;
}

std::string atbash_cipher::encode(const std::string& input) {
    std::string output;
    int group_size = 0;
    for(const char& ch: input){
        if( !std::isalnum(ch) )
            continue;
        if( group_size == atbash_cipher::GROUP_LENGTH ) {
            output.push_back(atbash_cipher::DELIM);
            group_size = 0;
        }
        output.push_back(atbash_cipher::atbash_char(ch));
        group_size++;
    }
    return output;
}

std::string atbash_cipher::decode(const std::string& input) {
    std::string output;
    for(const char& ch: input) {
        if( !std::isalnum(ch) ) continue;
        output.push_back(atbash_cipher::atbash_char(ch));
    }
    return output;
}