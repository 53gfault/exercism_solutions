#if !defined(HAMMING_H)
#define HAMMING_H
#include <numeric>
#include <stdexcept>
#include <string>
namespace hamming {
    int compute(const std::string&, const std::string&);
}  // namespace hamming

#endif // HAMMING_H