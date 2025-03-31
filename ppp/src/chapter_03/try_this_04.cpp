#include <iostream>

int main() {
    for (int i = 123; i <= 148; ++i) {
        std::cout << char('A' +  i - 123) << '\t' << i << '\n';
    }
}