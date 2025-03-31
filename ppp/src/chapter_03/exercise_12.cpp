#include <iostream>
#include <vector>

int main() {
//  std::vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}; // All primes between 1 and 100
  std::vector<int> found_primes;
  std::cout << "I'm going to find all the prime numbers between 1 and 100\n";

  for (int i = 2; i < 100; ++i) {
    bool is_prime = true;
    for (int j = 0; j < found_primes.size(); ++j) {
      if (i % found_primes[j] == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime) {
      found_primes.push_back(i);
    }
  }

  std::cout << "There are the primes I found:\n";
  for (int prime : found_primes) {
    std::cout << prime << "\n";
  }
}