#include "grains.h"
long long unsigned int
grains::total(){
    long long unsigned int tot = 0;
    for(int i=1; i <=64; i++)
        tot += square(i);
    return tot;
}