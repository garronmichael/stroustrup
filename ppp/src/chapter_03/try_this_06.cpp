#include <iostream>
#include <vector>
#include <string>

int main() {
  std::vector<std::string> words;

  for (std::string word; std::cin >> word;) {
    if (word == "pollution" || word == "plastic") {
      std::cout << "BLEEP\n";
    }
    else {
      std::cout << word << '\n';
    }
  }
}