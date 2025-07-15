#include "darts.h"

int
darts::score(const double& x, const double& y) {
    double rad = std::sqrt(std::pow(x, 2) + std::pow(y, 2));
    if(rad <= 1)
        return 10;
    if(rad <= 5)
        return 5;
    if(rad <= 10)
        return 1;
    return 0;
}