#include <iostream>

int main() {
  double val1 = 0;
  double val2 = 0;
  char operation = '\0';

  std::cout << "Enter two double values, followed by a math operator (+, -, *, /):\n";
  std::cin >> val1 >> val2 >> operation;

  switch (operation) {
    case '+':
      std::cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2;
      break;
    case '-':
      std::cout << "The difference of " << val1 << " and " << val2 << " is " << val1 - val2;
      break;
    case '*':
      std::cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2;
      break;
    case '/':
      std::cout << "The quotient of " << val1 << " and " << val2 << " is " << val1 / val2;
      break;
  }
}