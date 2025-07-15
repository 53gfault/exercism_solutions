#include "hamming.h"

int
hamming::compute(const std::string& str1, const std::string& str2) {
    if(str1.length() != str2.length())
        throw std::domain_error("Strands must be of equal length");
    return std::inner_product(
        str1.begin(), str1.end(), str2.begin(), 0,
        std::plus<>(), std::not_equal_to<>()
    );
}