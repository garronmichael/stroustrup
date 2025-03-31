#include <iostream>
#include <vector>
#include <limits>

int main() {
  std::vector<int> distances;
  int distance;
  int mean;
  int sum = 0;
  int smallest = std::numeric_limits<int>::max();
  int largest = std::numeric_limits<int>::min();

  while (std::cin >> distance) {
    distances.push_back(distance);
    sum += distance;

    if (distance < smallest) {
      smallest = distance;
    }

    if (distance > largest) {
      largest = distance;
    }
  }

  mean = sum / distances.size();

  std::cout << "Total distance: " << sum << '\n'
    << "Average distance: " << mean << '\n'
    << "Smallest distance: " << smallest << '\n'
    << "Largest distance: " << largest << '\n';
}