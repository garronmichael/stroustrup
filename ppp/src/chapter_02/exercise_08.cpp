#include <iostream>

int main() {
  std::cout << "Enter an integer and I will print out if it is odd or even:\n";
  int num = 0;
  std::cin >> num;
  if (num % 2 == 0) {
    std::cout << num << " is even.\n";
  } else {
    std::cout << num << " is odd.\n";
  }
}