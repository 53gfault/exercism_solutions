#include "eliuds_eggs.h"

int
chicken_coop::positions_to_quantity(int pos) {
    return std::bitset<sizeof(int) * 8>(pos).count();
}