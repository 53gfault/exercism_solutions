#include "kindergarten_garden.h"

std::array<kindergarten_garden::Plants, 4>
kindergarten_garden::plants(const std::string& all_plants, const std::string& student) {
    const int& idx = (student.at(0) - 'A' ) * 2;
    return std::array<kindergarten_garden::Plants, 4>{
        kindergarten_garden::Plants{all_plants[idx]},
        kindergarten_garden::Plants{all_plants[idx + 1]},
        kindergarten_garden::Plants{all_plants[all_plants.size() / 2 + idx + 1]},
        kindergarten_garden::Plants{all_plants[all_plants.size() / 2 + idx + 2]}
    };
}