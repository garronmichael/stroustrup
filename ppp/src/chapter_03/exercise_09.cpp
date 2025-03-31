#include <iostream>

int main() {
    // Reward the inventor of chess by granting grains of rice per square. The number of grains granted doubles for each square."
    std::cout << "How many grains of rice will we calculate?\n";
    int grains;
    int count = 0;
    int cur = 1;
    int sum = 1;

    std::cin >> grains;

    while (sum < grains) {
      sum += cur;
      cur *= 2;
      ++count;
    }

    std::cout << "Squares: " << count << '\n';
}