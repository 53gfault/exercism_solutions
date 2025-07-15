#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H
#include <cmath>
#include <stdexcept>
#include <utility>

namespace queen_attack {
    class chess_board {
        private:
            std::pair<int, int> white_;
            std::pair<int, int> black_;
            void validate_chess_piece(const std::pair<int, int>& p) {
                if(p.first < 0 || p.first > 7 || p.second < 0 || p.second > 7)
                    throw std::domain_error("Invalid position");
            }
            void validate_queens(
                const std::pair<int, int>& p1, const std::pair<int, int>& p2
            ) {
                if(p1 == p2)
                    throw std::domain_error("Both pieces are in same position");
            }
        public:
            chess_board(
                const std::pair<int, int>& p1, const std::pair<int, int>& p2
            ) {
                validate_chess_piece(p1);
                validate_chess_piece(p2);
                validate_queens(p1, p2);
                white_ = p1;
                black_ = p2;
            }
            const std::pair<int, int> white () const { return white_; }
            const std::pair<int, int> black () const { return black_; }
            bool can_attack () const;
    };
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H