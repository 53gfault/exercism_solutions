#include "raindrops.h"

std::string raindrops::convert(const int num) {
    std::string result;

    if (num % 3 == 0)
        result += "Pling";
    if (num % 5 == 0)
        result += "Plang";
    if (num % 7 == 0)
        result += "Plong";

    if (result.empty())
        result = std::to_string(num);

    return result;
}
