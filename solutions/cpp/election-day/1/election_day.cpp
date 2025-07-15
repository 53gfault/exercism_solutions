#include <string>
#include <vector>
#include <algorithm>

namespace election {

struct ElectionResult {
    std::string name{};
    int votes{};
};

int vote_count(const ElectionResult& res) {
    return res.votes;
}

void increment_vote_count(ElectionResult &res, int votes) {
    res.votes += votes;
}

ElectionResult& determine_result(std::vector<ElectionResult>& final_count) {
    std::vector<ElectionResult>::iterator max_iter = std::max_element(
        final_count.begin(),
        final_count.end(),
        [](const ElectionResult& a, const ElectionResult& b) {
            return a.votes < b.votes;
        }
    );
    if(max_iter != final_count.end())
        max_iter->name = "President " + max_iter->name;
    return *max_iter;
}

}