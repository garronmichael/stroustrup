#include <iostream>
#include <vector>

int main() {
  std::cout << "Here are all the primes between 1 and 100 using the Seive of Eratosthenes:\n";
  std::vector<bool> primes(100, true);

  for (int i = 2; i <= 100; ++i) {
    int j = i;

    if (primes[i]) {
      while (j <= 100) {
        int composite = j * i;
        primes[composite] = false;
        ++j;
      }
    }
  }

  for (int i = 2; i < primes.size(); ++i) {
    if (primes[i]) {
      std::cout << i << '\n';
    }
  }
}