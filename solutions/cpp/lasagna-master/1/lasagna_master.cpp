#include "lasagna_master.h"

int lasagna_master::preparationTime(const std::vector<std::string>& layers, int prepTime) {
    return prepTime * layers.size();
}

lasagna_master::amount lasagna_master::quantities(const std::vector<std::string>& layers) {
    int noodle{0};
    double sauce{0.0};
    for(const std::string& layer : layers) {
        if (layer == "noodles")
            noodle += 50;
        else if (layer == "sauce")
            sauce += 0.2;
    }
    return {noodle, sauce};
}

void lasagna_master::addSecretIngredient(
    std::vector<std::string>& my_ingredients,
    const std::vector<std::string>& friends_ingredients
) {
    if (!my_ingredients.empty() && !friends_ingredients.empty()) {
        my_ingredients.back() = friends_ingredients.back();
    }
}

void lasagna_master::addSecretIngredient(
    std::vector<std::string>& my_ingredients,
    const std::string& secret_ingredient
) {
    my_ingredients.back() = secret_ingredient;
}

std::vector<double> lasagna_master::scaleRecipe(
    const std::vector<double>& quantities,
    const int& portions
) {
    std::vector<double> scaled{};
    double scale_factor = portions / 2.00;
    for(const double &quantity: quantities)
        scaled.emplace_back(quantity * scale_factor);
    return scaled;
}
