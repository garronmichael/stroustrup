#include <iostream>
#include <cmath>

int main() {
  // Solve the quadratic equation ax² + bx + c = 0 which is x = (-b ± √(b² - 4ac)) / 2a.

  double a;
  double b;
  double c;
  std::cout << "Enter in a, b and c and I will solve for a quadratic equation:\n";
  std::cin >> a >> b >> c;
  double x1 = (-b + std::sqrt((b * b) - (4 * a * c))) / (2 * a);
  double x2 = (-b - std::sqrt((b * b) - (4 * a * c))) / (2 * a);

  std::cout << "x1 = " << x1 << " or x2 = " << x2 << '\n';
}