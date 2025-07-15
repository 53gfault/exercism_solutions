#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(const pillar_men_sensor* const sensor) {
    return sensor != nullptr;
}
int activity_counter(const pillar_men_sensor* const sensor_array, const int& size) {
    int total = 0;
    for(int t = 0; t < size; t++)
        total += (sensor_array+t)->activity;
    return total;
}
bool alarm_control(const pillar_men_sensor* const sensor) {
    return sensor == nullptr ? false : sensor->activity ? true : false;
}
bool uv_alarm(const pillar_men_sensor* const sensor) {
    if(sensor == nullptr)
        return false;
    return uv_light_heuristic(&sensor->data) > sensor->activity ? true : false;
}
// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(const std::vector<int>* const data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
