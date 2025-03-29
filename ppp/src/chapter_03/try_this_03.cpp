#include <iostream>

int main() {
  int i = 97;
  while (i <= 122) {
    std::cout << char('a' +  i - 97) << '\t' << i << '\n';
    ++i;
  }
}