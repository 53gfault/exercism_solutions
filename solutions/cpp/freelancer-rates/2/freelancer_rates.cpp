#include <cmath>
#include <iostream>

double daily_rate(double hourly_rate) {
    return hourly_rate * 8;
}

double apply_discount(double before_discount, double discount) {
    return before_discount * (100 - discount) / 100;
}

int monthly_rate(double hourly_rate, double discount) {
    return std::ceil(apply_discount(daily_rate(hourly_rate) * 22, discount));
}

int days_in_budget(int budget, double hourly_rate, double discount) {
    return std::floor(budget / apply_discount(daily_rate(hourly_rate), discount));
}