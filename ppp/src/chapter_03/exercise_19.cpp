#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> names;
    std::vector<int> scores;
    int score = 0;
    std::string name = "";

    std::cout << "Enter a name and then a score (Steven 100). Type NoName 0 to end.\n";

    while (std::cin >> name >> score) {
        if (name == "NoName" && score == 0) {
            break;
        }

        if (std::find(names.begin(), names.end(), name) == names.end()) {
            names.push_back(name);
            scores.push_back(score);
        } else {
            std::cout << "You already entered the name: " << name << '\n';
        }
    }

    std::cout << "Enter a name and I will tell you the score:\n";

    while (std::cin >> name) {
      bool found = false;
      for (int i = 0; i < names.size(); ++i) {
        if (name == names[i]) {
          found = true;
          std::cout << "The score for " << name << " is " << scores[i] << '\n';
          break;
        }
      }
      if (!found) {
          std::cout << "Sorry, I could not find the name: " << name << '\n';
      }
    }
}