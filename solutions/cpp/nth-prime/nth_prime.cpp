#include "nth_prime.h"

bool
nth_prime::is_prime(int n) {
    if (n==2 || n==3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int
nth_prime::get_next_prime(int n) {
    int new_prime_ = n + 1;
    while(!nth_prime::is_prime(new_prime_))
        new_prime_++;
    return new_prime_;
}
int
nth_prime::nth(int n) {
    nth_prime::validate_input(n);
    int last_prime = 2, prime_idx = 1;
    while(prime_idx < n) {
        last_prime = nth_prime::get_next_prime(last_prime);
        prime_idx++;
    }
    return last_prime;
}