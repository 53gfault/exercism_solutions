#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <algorithm>
#include <string>
#include <unordered_set>
#include <vector>

namespace allergies {
    class allergy_test {
        private:
            std::vector<std::pair<std::string, int>> allergens;
            int test_score;
        public:
            allergy_test(int t) : allergens{
                {"cats", 128}, {"pollen", 64}, {"chocolate", 32}, {"tomatoes", 16},
                {"strawberries", 8}, {"shellfish", 4}, {"peanuts", 2}, {"eggs", 1}
            }, test_score(t) {}
            bool is_allergic_to(const std::string&);
            std::unordered_set<std::string> get_allergies();
    };
}
#endif // ALLERGIES_H