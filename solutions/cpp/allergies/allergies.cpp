#include "allergies.h"

bool
allergies::allergy_test::is_allergic_to(const std::string& allergen) {
    auto present_allergies = get_allergies();
    return present_allergies.find(allergen) != present_allergies.end();
}

std::unordered_set<std::string>
allergies::allergy_test::get_allergies(){
    std::unordered_set<std::string> st;
    if(!test_score) return st;
    for( const auto& [allergen, val]: allergens) {
        if(val & test_score)
            st.emplace(allergen);
    }
    return st;
}