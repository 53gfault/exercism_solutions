#include "difference_of_squares.h"

int difference_of_squares::square_of_sum(int num) {
    int sum{0};
    while(num > 0)
        sum += num--;
    return static_cast<int>(std::pow(sum, 2));
}

int difference_of_squares::sum_of_squares(int num) {
    int sum{0};
    while(num > 0)
        sum += static_cast<int>(std::pow(num--, 2));
    return sum;
}

int difference_of_squares::difference(int num) {
    return difference_of_squares::square_of_sum(num) -
           difference_of_squares::sum_of_squares(num);
}