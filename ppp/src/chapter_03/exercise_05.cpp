#include <iostream>

int main() {
  int left = 0;
  int right = 100;
  int target = 0;

  std::cout << "Enter a number between 0 and 100: ";
  std::cin >> target;

  while (left <= right) {
    int mid = left + (right - left) / 2;
    std::cout << "Hm... is your number: " << mid << "?\n";
    if (target == mid) {
      std::cout << "I know! Your number is: " << mid << '\n';
      return 0;
    } else if (target < mid) {
      std::cout << "No, that is too high, right?\n";
      right = mid - 1;
    } else {
      std::cout << "No, that is too low, right?\n";
      left = mid + 1;
    }
  }

  std::cout << "No fair you put in a number outside the range!\n";
}