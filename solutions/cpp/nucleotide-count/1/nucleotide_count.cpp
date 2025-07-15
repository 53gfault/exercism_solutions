#include "nucleotide_count.h"

bool
nucleotide_count::is_valid(const std::string& strand) {
    if(std::any_of(
        strand.begin(), strand.end(), [](const char& ch) {
            return (ch != 'G' && ch != 'C' && ch != 'A' && ch != 'T');
        }
    ))
        return false;
    return true;
}
std::map<char, int>
nucleotide_count::count(const std::string& strand) {
    if(!nucleotide_count::is_valid(strand))
        throw std::invalid_argument("Not a valid strand");
    std::map<char, int> char_count{
        {'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}
    };
    std::for_each(
        strand.begin(), strand.end(), [&char_count](const char& ch){
            char_count[ch]++;
        }
    );
    return char_count;
}