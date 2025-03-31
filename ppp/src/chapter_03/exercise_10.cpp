#include <iostream>
// Largest number of squares is 31 for an int and the answer is: -2147483648
// Largest number of squares is 1023 for a doulbe and the answer is: 8.98847e+307

int main() {
    // Reward the inventor of chess by granting grains of rice per square. The number of grains granted doubles for each square."
    int count = 0;
    double cur = 1;
    double sum = 1;

    while (count < 1023) {
        sum += cur;
        cur *= 2;
        ++count;
    }

    std::cout << "Squares: " << count << '\n'
        << "Grains: " << sum << '\n';
}