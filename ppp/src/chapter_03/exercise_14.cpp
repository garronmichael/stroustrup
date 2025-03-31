#include <iostream>
#include <vector>

int main() {
    std::cout << "Enter a number and I will find all the primes up to the number:\n";
    int n = 0;
    std::cin >> n;
    std::vector<bool> primes(n + 1, true);

    for (int i = 2; i <= n; ++i) {
        int j = i;

        if (primes[i]) {
            while (j <= n) {
                int composite = j * i;
                primes[composite] = false;
                ++j;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (primes[i]) {
            std::cout << i << '\n';
        }
    }
}