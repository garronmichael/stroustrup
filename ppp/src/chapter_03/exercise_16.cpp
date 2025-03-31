#include <iostream>
#include <map>
#include <string>
#include <limits>

int main() {
    std::cout << "Input a sequence of strings:\n";
    std::vector<std::string> sequence;
    std::map<std::string, int> counts;

    std::string i;

    int mode = 0;
    int max = std::numeric_limits<int>::min();
    int min = std::numeric_limits<int>::max();
    std::string mode_string;
    std::string min_string;
    std::string max_string;

    while (std::cin >> i) {
      if (i == "|") {
        break;
      }

      if (counts.contains(i)) {
            ++counts[i];
      } else {
        sequence.push_back(i);
        counts[i] = 1;
        int size = i.size();
        if (size> max) {
          max = size;
          max_string = i;
        }
        if (size< min) {
          min = size;
          min_string = i;
        }
      }
    }

    for (std::string j : sequence) {
        if (counts[j] > mode) {
            mode_string = j;
            mode = counts[j];
        }
    }

    std::cout << "The mode is: " << mode_string << " with "<< mode << '\n'
        << "The max is: " << max_string << " with " << max << '\n'
        << "The min is: " << min_string << " with " << min << '\n';
}