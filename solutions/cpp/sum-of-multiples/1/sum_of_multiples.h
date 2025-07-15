#if !defined(SUM_OF_MULTIPLES_H)
#define SUM_OF_MULTIPLES_H
#include <numeric>
#include <set>
#include <vector>

namespace sum_of_multiples {
    std::set<int> get_multiples(int, int);
    int to(std::vector<int>, int);
}  // namespace sum_of_multiples

#endif // SUM_OF_MULTIPLES_H