#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H
#include <algorithm>
#include <map>
#include <string>
#include <vector>

namespace grade_school {
    class school {
        private:
            std::map<int, std::vector<std::string>> roster_;
        public:
            school() = default;
            void add(const std::string&, int);
            const std::vector<std::string> grade(int) const;
            const std::map<int, std::vector<std::string>> roster() const;
    };
}// namespace grade_school

#endif // GRADE_SCHOOL_H