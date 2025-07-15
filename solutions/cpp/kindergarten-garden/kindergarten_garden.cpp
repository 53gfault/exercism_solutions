#include "kindergarten_garden.h"

std::array<kindergarten_garden::Plants, 4>
kindergarten_garden::plants(const std::string& all_plants, const std::string& student) {
    std::unordered_map<std::string, unsigned int> names{
        {"Alice", 0}, {"Bob", 1}, {"Charlie", 2}, {"David", 3}, {"Eve", 4},
        {"Fred", 5}, {"Ginny", 6}, {"Harriet", 7}, {"Ileana", 8}, {"Joseph", 9},
        {"Kincaid", 10}, {"Larry", 11}
    };
    const int& idx = names.at(student) * 2;
    return std::array<kindergarten_garden::Plants, 4>{
        kindergarten_garden::Plants{all_plants[idx]},
        kindergarten_garden::Plants{all_plants[idx + 1]},
        kindergarten_garden::Plants{all_plants[all_plants.size() / 2 + idx + 1]},
        kindergarten_garden::Plants{all_plants[all_plants.size() / 2 + idx + 2]}
    };
}