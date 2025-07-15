#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H
#include <algorithm>
#include <map>
#include <string>

namespace rna_transcription {
    const std::map<char, char> rna_map_ {
        {'G', 'C'}, {'C', 'G'}, {'T', 'A'}, {'A', 'U'}
    };
    char to_rna(const char&);
    std::string to_rna(const std::string&);
}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H