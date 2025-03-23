#include <iostream>

int main() {
  std::cout << "Enter an operation and then two operands (+, 10, 5):\n";
  std::string operation; // operator is maybe a keyword?
  int operand1 = 0;
  int operand2 = 0;
  std::cin >> operation >> operand1 >> operand2;
  if (operation == "+" || operation == "plus") {
    std::cout << "Result: " << operand1 + operand2;
  } else if (operation == "-" || operation == "minus") {
    std::cout << "Result: " << operand1 - operand2;
  } else if (operation == "*" || operation == "times") {
    std::cout << "Result: " << operand1 * operand2;
  } else if (operation == "/" || operation == "divide") {
    std::cout << "Result: " << operand1 / operand2;
  } else {
    std::cout << "Operation not supported.\n";
  }
}