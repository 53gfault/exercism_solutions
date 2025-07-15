#include "vehicle_purchase.h"

namespace vehicle_purchase {

    bool needs_license(std::string kind){
        return kind == "car" || kind == "truck";
    }

    std::string choose_vehicle(std::string option1, std::string option2) {
        std::string chosen_car = option1 < option2 ? option1 : option2;
        return chosen_car += " is clearly the better choice.";
    }

    double calculate_resell_price(double original_price, double age) {
        double resell_price = 0.0;
        if( age < 3 )
            resell_price = 0.8 * original_price;
        else if( age < 10 )
            resell_price = 0.7 * original_price;
        else
            resell_price = 0.5 * original_price;
        return resell_price;
    }

}