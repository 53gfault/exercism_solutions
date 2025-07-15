#include "doctor_data.h"

heaven::Vessel::Vessel(const std::string& name, int generation)
    : name(name), generation(generation), current_system(star_map::System::Sol) {}

heaven::Vessel::Vessel(const std::string& name, int generation, star_map::System current_system)
    : name(name), generation(generation), current_system(current_system) {}

heaven::Vessel::Vessel(const heaven::Vessel& other)
    : name(other.name),
      generation(other.generation),
      current_system(other.current_system),
      busters(other.busters) {}

heaven::Vessel heaven::Vessel::replicate(std::string name) const {
    return Vessel{name, generation + 1, current_system};
}

void heaven::Vessel::make_buster() {
    ++busters;
}

bool heaven::Vessel::shoot_buster() {
    if (busters == 0) {
        return false;
    }
    --busters;
    return true;
}

std::string heaven::get_older_bob(const heaven::Vessel& v1, const heaven::Vessel& v2) {
    return (v1.generation <= v2.generation) ? v1.name : v2.name;
}

bool heaven::in_the_same_system(const heaven::Vessel& v1, const heaven::Vessel& v2) {
    return v1.current_system == v2.current_system;
}