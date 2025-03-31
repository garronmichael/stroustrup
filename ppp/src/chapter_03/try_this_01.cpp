#include <iostream>

int main() {
  constexpr double yen_to_dollar = 0.0067;
  constexpr double kroner_to_dollar = 0.095;
  constexpr double pound_to_dollar = 1.29;
  double amount = 1;
  char currency = '\0'; // cannot set to '' and have not learned this yet but I guess '\0' is the null char carried over from C

  std::cout << "Enter an amount followed by a currency (y, k, p):\n";
  std::cin >> amount >> currency;
  std::cout << amount << currency << " is equal to:\n";

  if (currency == 'y') {
    std::cout << "$" << amount * yen_to_dollar;
  } else if (currency == 'k') {
    std::cout << "$" << amount * kroner_to_dollar;
  } else if (currency == 'p') {
    std::cout << "$" << amount * pound_to_dollar;
  } else {
    std::cout << "That currency is not supported.\n";
  }
}