#include <iostream>

int square(int x) {
  int count = 0;
  int result = 0;
  while (count < x) {
    result += x;
    ++count;
  }

  return result;
}

int main() {
    for (int i = 0; i <= 9; ++i) {
        std::cout << square(i) << '\n';
    }
}