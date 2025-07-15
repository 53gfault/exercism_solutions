#include "prime_factors.h"

std::vector<int>
prime_factors::of(int n) {
    std::vector<int> factors;
    for(int i = 2; i <= n; i++) {
        if(n % i == 0) {
            factors.emplace_back(i);
            n /= i;
            i--;
        }
    }
    return factors;
}