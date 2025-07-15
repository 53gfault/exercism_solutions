#include "high_scores.h"

namespace arcade {
    std::vector<int> HighScores::list_scores() {
        return scores;
    }
    int HighScores::latest_score() {
        return scores.back();
    }
    int HighScores::personal_best() {
        return *std::max_element(scores.begin(), scores.end());
    }
    std::vector<int> HighScores::top_three() {
        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
        for(int v: scores) {
            pq.push(v);
            if(pq.size() > 3)
                pq.pop();
        }
        std::vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top());
            pq.pop();
        }
        return {result.rbegin(), result.rend()};
    }
}  // namespace arcade
