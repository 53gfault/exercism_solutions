#pragma once

#include <string>
#include <vector>

namespace speedywagon {

    struct pillar_men_sensor {
        int activity{};
        std::string location{};
        std::vector<int> data{};
    };

    int uv_light_heuristic(const std::vector<int>* const data_array);
    bool connection_check(const pillar_men_sensor* const);
    int activity_counter(const pillar_men_sensor* const, const int&);
    bool alarm_control(const pillar_men_sensor* const);
    bool uv_alarm(const pillar_men_sensor* const);
}  // namespace speedywagon
