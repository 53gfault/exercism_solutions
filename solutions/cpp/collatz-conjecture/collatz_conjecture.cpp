#include "collatz_conjecture.h"

int
collatz_conjecture::steps(int num) {
    collatz_conjecture::validate(num);
    int steps_ = 0;
    while(num > 1){
        num = (num % 2 == 0) ? num / 2 : 3 * num + 1;
        steps_++;
    }
    return steps_;
}