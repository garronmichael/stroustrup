#include <iostream>

int main() {
  std::cout << "Enter a spelled-out number (zero, one, etc.):\n";
  std::string input;
  std::cin >> input;
  if (input == "zero") {
    std::cout << "0";
  } else if (input == "one") {
    std::cout << "1";
  } else if (input == "two") {
    std::cout << "2";
  } else if (input == "three") {
    std::cout << "3";
  } else if (input == "four") {
    std::cout << "4";
  } else {
    std::cout << "Not a number I know. :(\n";
  }
}