#include "triangle.h"

bool
triangle::is_triangle(const double& a, const double& b, const double& c) {
    return a + b > c && b + c > a && c + a > b;
}

triangle::flavor
triangle::kind(const double& a, const double& b, const double& c) {
    if(!triangle::is_triangle(a, b, c))
        throw std::domain_error("Not a triangle!");
    if(a == b && b == c)
        return triangle::flavor::equilateral;
    if(a == b || b == c || c == a)
        return triangle::flavor::isosceles;
    return triangle::flavor::scalene;
}