#include <iostream>
#include <string>
#include <map>

int main() {
    std::vector<std::string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::map<std::string, int> word_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
                                                  {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    std::map<std::string, int> number_map = {{"0", 0}, {"1", 1}, {"2", 2}, {"3", 3}, {"4", 4},
                                              {"5", 5}, {"6", 6}, {"7", 7}, {"8", 8}, {"9", 9}};

    std::string input1;
    std::string input2;

    int val1 = 0;
    int val2 = 0;
    char operation = '\0';

    std::cout << "Enter two int values, followed by a math operator (+, -, *, /):\n";
    std::cin >> input1 >> input2 >> operation;

    if (word_map.contains(input1)) {
      val1 = word_map[input1];
    } else {
      val1 = number_map[input1];
    }

    if (word_map.contains(input2)) {
      val2 = word_map[input2];
    } else {
      val2 = number_map[input2];
    }

    switch (operation) {
        case '+':
            std::cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2;
            break;
        case '-':
            std::cout << "The difference of " << val1 << " and " << val2 << " is " << val1 - val2;
            break;
        case '*':
            std::cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2;
            break;
        case '/':
            std::cout << "The quotient of " << val1 << " and " << val2 << " is " << val1 / val2;
            break;
    }
}