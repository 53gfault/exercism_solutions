#pragma once
#include <array>
#include <string>
#include <unordered_map>

namespace kindergarten_garden {
    enum class Plants: char {
        clover = 'C',
        grass = 'G',
        violets = 'V',
        radishes = 'R',
    };
    std::array<Plants, 4> plants(const std::string& all_plants, const std::string& student);
}  // namespace kindergarten_garden
