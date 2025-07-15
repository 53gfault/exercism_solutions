#if !defined(BOB_H)
#define BOB_H
#include <algorithm>
#include <cctype>
#include <string>
namespace util {
    inline std::string strip(std::string s) {
        s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());
        return s;
    }
    inline bool isUpper(const std::string& s) {
        bool has_alpha = std::any_of(s.begin(), s.end(), ::isalpha);
        bool all_upper = std::all_of(s.begin(), s.end(), [](unsigned char c){
            return std::isalpha(c) ? std::isupper(c) : true;
        });
        return has_alpha ? all_upper : false;
    }
}
namespace bob {
    std::string hey(const std::string&);
}
#endif