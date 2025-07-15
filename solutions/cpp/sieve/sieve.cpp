#include "sieve.h"

std::vector<int>
sieve::primes(int n) {
    std::vector<int> all_primes;
    for(int i = 2; i <= n; i++) {
        if(std::any_of(
            all_primes.begin(), all_primes.end(),
            [i](int p){return i % p == 0;})
        )
           continue;
        all_primes.emplace_back(i);
    }
    return all_primes;
}