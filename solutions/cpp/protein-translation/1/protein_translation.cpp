#include "protein_translation.h"

std::vector<std::string> protein_translation::proteins(const std::string& rna) {
    std::vector<std::string> proteins;
    for(size_t i = 0; i < rna.size(); i += 3) {
        const std::string codon = rna.substr(i, 3);
        const std::string& amino_acid = protein_translation::CODON_PROTEIN_MAP.at(codon);
        if(amino_acid != protein_translation::STOP)
            proteins.push_back(amino_acid);
        else
            break;
    }
    return proteins;
}