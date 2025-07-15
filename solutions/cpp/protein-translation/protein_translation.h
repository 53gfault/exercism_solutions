#if !defined(PROTEIN_TRANSLATION_H)
#define PROTEIN_TRANSLATION_H
#include <unordered_map>
#include <string>
#include <vector>

namespace protein_translation {
    const std::string STOP = "STOP";
    const std::unordered_map<std::string, std::string> CODON_PROTEIN_MAP {
        {"AUG", "Methionine"},
        {"UUU", "Phenylalanine"}, {"UUC", "Phenylalanine"},
        {"UUA", "Leucine"}, {"UUG", "Leucine"},
        {"UCU", "Serine"}, {"UCC", "Serine"}, {"UCA", "Serine"}, {"UCG", "Serine"},
        {"UAU", "Tyrosine"}, {"UAC", "Tyrosine"},
        {"UGU", "Cysteine"}, {"UGC", "Cysteine"},
        {"UGG", "Tryptophan"},
        {"UAA", STOP}, {"UAG", STOP}, {"UGA", STOP}
    };

    std::vector<std::string> proteins(const std::string& rna);
}  // namespace protein_translation

#endif // PROTEIN_TRANSLATION_H