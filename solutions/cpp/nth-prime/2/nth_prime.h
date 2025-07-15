#if !defined(NTH_PRIME_H)
#define NTH_PRIME_H
#include <algorithm>
#include <stdexcept>
#include <vector>

namespace nth_prime {
    inline void validate_input(int n) {
        if(n < 1)
            throw std::domain_error("Invalid input");
    }
    bool is_prime(int);
    int get_next_prime(int);
    int nth(int);
}  // namespace nth_prime

#endif // NTH_PRIME_H