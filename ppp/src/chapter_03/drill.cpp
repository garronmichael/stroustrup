#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <string>
#include <algorithm>

int main() {
  std::vector<float> v;
  double val = 0;
  double smallest = std::numeric_limits<double>::max();
  double largest = std::numeric_limits<double>::min();
  int count = 0;
  int sum = 0;
  std::string units;
  double cm_to_m = 0.01;
  double in_to_m = 0.0254;
  double ft_to_m = 0.3048;

  while (std::cin >> val >> units) {
    if (units == "m") {
      // do nothing
    } else if (units == "cm") {
      val *= cm_to_m;
    } else if (units == "in") {
      val *= in_to_m;
    } else if (units == "ft") {
      val *= ft_to_m;
    } else {
      std::cout << "This is not a valid unit.\n";
    }

    v.push_back(val);

    if (val < smallest) {
      smallest = val;
    }
    if (val > largest) {
      largest = val;
    }

    ++count;
    sum += val;

    std::cout << "The smallest value is: " << smallest << '\n'
      << "The largest value is: " << largest << '\n'
      << "The sum is: " << sum << '\n'
      << "The count is: " << count << '\n';
  }

  std::ranges::sort(v);

  std::cout << "All values are: " << '\n';
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << '\n';
  }
}