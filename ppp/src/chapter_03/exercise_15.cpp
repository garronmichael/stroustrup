#include <iostream>
#include <vector>
#include <map>

int main() {
  std::cout << "Input a sequence of positive numbers:\n";
  std::vector<int> sequence;
  std::map<int, int> counts;

  int i = 0;
  int mode = 0;
  while (std::cin >> i) {
    if (counts.contains(i)) {
      ++counts[i];
    } else {
      sequence.push_back(i);
      counts[i] = 1;
    }
  }

  for (int j : sequence) {
    if (counts[j] > mode) {
      mode = j;
    }
  }

  std::cout << "The mode is: " << mode << '\n';
}
