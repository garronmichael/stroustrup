#include <iostream>
#include <string>

int main() {
  int pennies = 0;
  int nickles = 0;
  int dimes = 0;
  int quarters = 0;
  int half_dollars = 0;

  std::cout << "How many pennies do you have?\n";
  std::cin >> pennies;
  std::cout << "How many nickles do you have?\n";
  std::cin >> nickles;
  std::cout << "How many dimes do you have?\n";
  std::cin >> dimes;
  std::cout << "How many quarters do you have?\n";
  std::cin >> quarters;
  std::cout << "How many half dollars do you have?\n";
  std::cin >> half_dollars;

  int total_cents = (pennies + (nickles * 5) + (dimes * 10) + (quarters * 20) + (half_dollars * 50));
  int dollars = total_cents / 100;
  int cents = total_cents % 100;

  std::string penny_statement = "You have " + std::to_string(pennies);
  std::string nickle_statement = "You have " + std::to_string(nickles);
  std::string dime_statement = "You have " + std::to_string(dimes);
  std::string quarter_statement = "You have " + std::to_string(quarters);
  std::string half_dollar_statement = "You have " + std::to_string(half_dollars);

  if (pennies == 1) {
    penny_statement += " penny.\n";
  } else {
    penny_statement += " pennies.\n";
  }

  if (nickles == 1) {
    nickle_statement += " nickle.\n";
  } else {
    nickle_statement += " nickles.\n";
  }

  if (dimes == 1) {
    dime_statement += " dime.\n";
  } else {
    dime_statement += " dimes.\n";
  }

  if (quarters == 1) {
    quarter_statement += " quarter.\n";
  } else {
    quarter_statement += " quarters.\n";
  }

  if (half_dollars == 1) {
    half_dollar_statement += " half dollar.\n";
  } else {
    half_dollar_statement += " half dollars.\n";
  }

  std::cout << penny_statement
            << nickle_statement
            << dime_statement
            << quarter_statement
            << half_dollar_statement
            << "And you have " << std::to_string(dollars) << " dollars and " << std::to_string(cents) << " cents.\n";
}