#include "secret_handshake.h"

std::vector<std::string>
secret_handshake::commands(int num) {
    std::vector<std::string> commands_;
    for (size_t i = 0; i < all_commands_.size(); ++i)
        if (num & (1 << i))
            commands_.emplace_back(all_commands_[i]);
    if (num & (1 << all_commands_.size()))
        std::reverse(commands_.begin(), commands_.end());
    return commands_;
}