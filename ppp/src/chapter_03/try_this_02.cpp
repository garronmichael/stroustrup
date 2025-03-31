#include <iostream>

int main() {
    constexpr double yen_to_dollar = 0.0067;
    constexpr double kroner_to_dollar = 0.095;
    constexpr double pound_to_dollar = 1.29;
    constexpr double swiss_franc_to_dollar = 1.13;
    double amount = 1;
    char currency = '\0'; // cannot set to '' and have not learned this yet but I guess '\0' is the null char carried over from C

    std::cout << "Enter an amount followed by a currency (y, k, p, f):\n";
    std::cin >> amount >> currency;
    std::cout << amount << currency << " is equal to:\n";

    switch (currency) {
        case 'y':
            std::cout << "$" << amount * yen_to_dollar;
            break;
        case 'k':
            std::cout << "$" << amount * kroner_to_dollar;
            break;
        case 'p':
            std::cout << "$" << amount * pound_to_dollar;
            break;
        case 'f':
          std::cout << "$" << amount * swiss_franc_to_dollar;
          break;
        default:
            std::cout << "That currency is not supported.\n";
            break;
    }
}