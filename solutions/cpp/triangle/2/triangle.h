#if !defined(TRIANGLE_H)
#define TRIANGLE_H
#include <stdexcept>

namespace triangle {
    enum class flavor {
        equilateral,
        isosceles,
        scalene
    };
    bool is_triangle(const double&, const double&, const double&);
    flavor kind(const double&, const double&, const double&);
}  // namespace triangle

#endif // TRIANGLE_H