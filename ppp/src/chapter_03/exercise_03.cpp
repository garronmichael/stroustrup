#include <vector>
#include <iostream>
#include <algorithm>

int main() {
  std::vector<double> temps;
  for (double temp; std::cin >> temp;) {
    temps.push_back(temp);
  }

  std::ranges::sort(temps);
  double median;
  if (temps.size() % 2 == 0) {
    median = (temps[temps.size() / 2] + temps[temps.size() / 2 + 1]) / 2;
  } else {
    median = temps[temps.size() / 2];
  }
  std::cout << "Median: " << median << '\n';
}