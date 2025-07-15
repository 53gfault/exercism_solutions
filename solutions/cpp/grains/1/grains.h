#if !defined(GRAINS_H)
#define GRAINS_H
#include <cmath>

namespace grains {
    inline long long unsigned int square(int num) {return std::pow(2, num - 1);}
    long long unsigned int total();
}  // namespace grains

#endif // GRAINS_H