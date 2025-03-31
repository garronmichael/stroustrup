#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> names = {};
    std::vector<int> scores = {};
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

    std::cout << "Enter a score and I will tell you all the names with that score:\n";

    while (std::cin >> score) {
        bool found = false;
        std::vector<std::string> found_names = {};
        for (int i = 0; i < scores.size(); ++i) {
            if (score == scores[i]) {
                found = true;
                found_names.push_back(names[i]);
            }
        }
        if (found) {
            std::cout << "The names with the score " << score << " are:\n";
          for (int i = 0; i < found_names.size(); ++i) {
              std::cout << found_names[i] << '\n';
          }
        } else {
            std::cout << "Sorry, I could not find any names with the score: " << score << '\n';
        }
    }
}