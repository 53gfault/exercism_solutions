#include <array>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

std::vector<int> round_down_scores(const std::vector<double>& student_scores) {
    std::vector<int> floor_scores;
    floor_scores.reserve(student_scores.size());
    for (const double& score : student_scores) {
        floor_scores.emplace_back(static_cast<int>(std::floor(score)));
    }
    return floor_scores;
}

int count_failed_students(const std::vector<int>& student_scores) {
    int failed = 0;
    for (const int& score : student_scores) {
        failed += score > 40 ? 0 : 1;
    }
    return failed;
}

std::vector<int> above_threshold(const std::vector<int>& student_scores, int threshold) {
    std::vector<int> best;
    for (const int& score : student_scores) {
        if (score >= threshold) {
            best.emplace_back(score);
        }
    }
    return best;
}

std::array<int, 4> letter_grades(int highest_score) {
    int interval = (highest_score - 40) / 4;
    return {41, 41 + interval, 41 + 2 * interval, 41 + 3 * interval};
}

std::vector<std::string> student_ranking(
    const std::vector<int>& student_scores,
    const std::vector<std::string>& student_names
) {
    std::vector<std::string> ranks;
    for (size_t i = 0; i < student_scores.size() && i < student_names.size(); ++i) {
        ranks.emplace_back(
            std::to_string(i + 1) + ". " +
            student_names[i] + ": " +
            std::to_string(student_scores[i])
        );
    }
    return ranks;
}

std::string perfect_score(
    const std::vector<int>& student_scores,
    const std::vector<std::string>& student_names
) {
    std::vector<int>::const_iterator it = std::find_if(
        student_scores.begin(),
        student_scores.end(),
        [](int score) { return score == 100; }
    );
    std::string perfect_student{""};
    if (it != student_scores.end()) {
        size_t index = std::distance(student_scores.begin(), it);
        perfect_student = student_names[index];
    }
    return perfect_student;
}
