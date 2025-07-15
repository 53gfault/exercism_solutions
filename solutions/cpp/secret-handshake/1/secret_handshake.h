#if !defined(SECRET_HANDSHAKE_H)
#define SECRET_HANDSHAKE_H
#include <algorithm>
#include <string>
#include <vector>

namespace secret_handshake {
    const std::vector<std::string> all_commands_{
        "wink", "double blink", "close your eyes", "jump"
    };
    std::vector<std::string> commands(int);
}  // namespace secret_handshake

#endif // SECRET_HANDSHAKE_H
