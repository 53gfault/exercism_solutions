#include "space_age.h"

long long space_age::space_age::seconds() const {
    return age;
}

double space_age::space_age::on_earth() const {
    return age / EARTH_SECONDS;
}

double space_age::space_age::calculate_age(const double& orbital_period) const {
    return on_earth() / orbital_period;
}

double space_age::space_age::on_mercury() const {
    return calculate_age(MERCURY_ORBITAL_PERIOD);
}

double space_age::space_age::on_venus() const {
    return calculate_age(VENUS_ORBITAL_PERIOD);
}

double space_age::space_age::on_mars() const {
    return calculate_age(MARS_ORBITAL_PERIOD);
}

double space_age::space_age::on_jupiter() const {
    return calculate_age(JUPITER_ORBITAL_PERIOD);
}

double space_age::space_age::on_saturn() const {
    return calculate_age(SATURN_ORBITAL_PERIOD);
}

double space_age::space_age::on_uranus() const {
    return calculate_age(URANUS_ORBITAL_PERIOD);
}

double space_age::space_age::on_neptune() const {
    return calculate_age(NEPTUNE_ORBITAL_PERIOD);
}
