#include <iostream>
#include <vector>
#include <string>
#include <map>

int main() {
    std::vector<std::string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::map<std::string, int> word_number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
                                                  {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    std::string input;
    std::cout << "Enter an spelled out number between 0 and 9 (one, two, three...):\n";
    std::cin >> input;
    std::cout << "You choose: " << word_number_map[input] << '\n';
}