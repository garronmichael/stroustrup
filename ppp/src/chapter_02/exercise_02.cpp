#include <iostream>

int main()
{
    double miles;
    std::cout << "Enter the number of miles you want to convert to kilometers:\n";
    std::cin >> miles;
    double miles_to_kilometers = 1.609;
    double result = miles * miles_to_kilometers;
    std::cout << miles << " miles == " << result << " kilometers.";
}