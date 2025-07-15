#ifndef DOCTOR_DATA_H
#define DOCTOR_DATA_H

#include <string>

namespace star_map {
    enum class System {
        AlphaCentauri,
        BetaHydri,
        DeltaEridani,
        EpsilonEridani,
        Omicron2Eridani,
        Sol
    };
}

namespace heaven {
    class Vessel {
    public:
        std::string name;
        int generation;
        star_map::System current_system;
        int busters{0};
        Vessel(const std::string& name, int generation);
        Vessel(const std::string& name, int generation, star_map::System current_system);
        Vessel(const Vessel& other);
        Vessel replicate(std::string) const;
        void make_buster();
        bool shoot_buster();
    };

    std::string get_older_bob(const Vessel& v1, const Vessel& v2);
    bool in_the_same_system(const Vessel& v1, const Vessel& v2);
}

#endif // DOCTOR_DATA_H