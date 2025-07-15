#if !defined(COLLATZ_CONJECTURE_H)
#define COLLATZ_CONJECTURE_H
#include <stdexcept>

namespace collatz_conjecture {
    inline void validate(int num) {
        if(num < 1)
            throw std::domain_error("Invalid number");
    }
    int steps(int);
}  // namespace collatz_conjecture

#endif // COLLATZ_CONJECTURE_H