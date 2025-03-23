#include <iostream>
#include <algorithm>

int main() {
    std::cout << "Enter two floating-point values:\n";
    double val1 = 0;
    double val2 = 0;
    std::cin >> val1 >> val2;
    std::cout << "Smaller value is: " << std::min(val1, val2) << "\n"
        << "Larger value is: " << std::max(val1, val2) << "\n"
        << "Product of the values is: " << val1 * val2 << "\n"
        << "Ratio of the values is: " << val1 / val2 << "\n";
}