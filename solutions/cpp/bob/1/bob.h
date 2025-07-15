#if !defined(BOB_H)
#define BOB_H
#include <algorithm>
#include <cctype>
#include <string>
namespace util {
    inline std::string strip(const std::string& s) {
        std::string new_str = s;
        new_str.erase(std::remove_if(new_str.begin(), new_str.end(), ::isspace), new_str.end());
        return new_str;
    }
    inline bool isUpper(const std::string& s) {
        bool no_alphas = true;
        for(const char& ch: s) {
            if(std::isalpha(ch)) {
                no_alphas = false;
                if(!std::isupper(ch))
                    return false;
            }
        }
        return no_alphas ? false : true;
    }
}
namespace bob {
    std::string hey(const std::string&);
}  // namespace bob
#endif // BOB_H