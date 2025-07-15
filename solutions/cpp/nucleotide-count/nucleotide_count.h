#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H
#include <algorithm>
#include <map>
#include <stdexcept>
#include <string>

namespace nucleotide_count {
    bool is_valid(const std::string&);
    std::map<char,int> count(const std::string&);
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H