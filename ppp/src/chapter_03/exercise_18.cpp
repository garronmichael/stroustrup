#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
  std::vector<std::string> names;
  std::vector<int> scores;
  int score = 0;
  std::string name = "";

  std::cout << "Enter a name and thhen a score (Steven 100):\n";

  while (std::cin >> name >> score) {
    if (name == "NoName" && score == 0) {
      break;
    }

    if (std::find(names.begin(), names.end(), name) == names.end()) {
      names.push_back(name);
      scores.push_back(score);
    } else {
      std::cout << "You already entered the name: " << name << '\n';
      break;
    }
  }

  for (int i = 0; i < names.size(); ++i) {
    std::cout << names[i] << " " << scores[i] << '\n';
  }
}