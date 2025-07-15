#pragma once
#include <vector>
#include <string>
#include <cmath>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(const std::vector<std::string>& layers, int prepTime = 2);
amount quantities(const std::vector<std::string>& layers);
void addSecretIngredient(
    std::vector<std::string>& my_ingredients,
    const std::vector<std::string>& friends_ingredients
);
void addSecretIngredient(
    std::vector<std::string>& my_ingredients,
    const std::string& secret_ingredient
);
std::vector<double> scaleRecipe(const std::vector<double>& quantities, const int& portions);

}  // namespace lasagna_master
