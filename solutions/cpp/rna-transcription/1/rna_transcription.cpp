#include "rna_transcription.h"

char
rna_transcription::to_rna(const char& ch) {
    return rna_map_.at(ch);
}
std::string
rna_transcription::to_rna(const std::string& dna) {
    std::string rna;
    rna.reserve(dna.size());
    std::transform(dna.begin(), dna.end(), std::back_inserter(rna), [](char ch) {
        return rna_transcription::to_rna(ch);
    });
    return rna;
}