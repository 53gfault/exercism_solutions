#include "queen_attack.h"

bool
queen_attack::chess_board::can_attack() const {
    return (
        white_.first == black_.first ||
        white_.second == black_.second ||
        std::abs(white_.first - black_.first) == std::abs(white_.second - black_.second)
    );
}