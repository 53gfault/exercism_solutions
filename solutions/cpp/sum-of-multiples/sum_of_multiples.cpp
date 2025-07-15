#include "sum_of_multiples.h"

std::set<int>
sum_of_multiples::get_multiples(int base, int level) {
    std::set<int> multiples;
    for(int i = base; i < level; i += base)
        multiples.insert(i);
    return multiples;
}
int
sum_of_multiples::to(std::vector<int> bases, int level) {
    std::set<int> unique;
    for(int base: bases) {
        auto multiples = sum_of_multiples::get_multiples(base, level);
        unique.insert(multiples.begin(), multiples.end());
    }
    return std::accumulate(unique.begin(), unique.end(), 0);
}