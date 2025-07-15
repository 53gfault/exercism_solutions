#include "grade_school.h"

void
grade_school::school::add(const std::string& name, int grade) {
    roster_[grade].emplace_back(name);
    std::sort(roster_[grade].begin(), roster_[grade].end());
}
const std::vector<std::string>
grade_school::school::grade(int grade) const {
    if(roster_.count(grade))
        return roster_.at(grade);
    return {};
}
const std::map<int, std::vector<std::string>>
grade_school::school::roster() const {
    return roster_;
}