#include <iostream>

int main() {
  std::cout << "Enter three integers:\n";
  int val1 = 0;
  int val2 = 0;
  int val3 = 0;
  std::cin >> val1 >> val2 >> val3;
  if (val1 <= val2 && val2 <= val3)
    std::cout << val1 << " " << val2 << " " << val3;
  if (val2 <= val1 && val1 <= val3)
    std::cout << val2 << " " << val1 << " " << val3;
  if (val3 <= val1 && val1 <= val2)
      std::cout << val3 << " " << val1 << " " << val2;
  if (val3 <= val2 && val2 <= val1)
    std::cout << val3 << " " << val2 << " " << val1;
}