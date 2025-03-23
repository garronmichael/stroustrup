#include <string>

int main() {
  // illegal
  int double = 0; // previous type
  int five = "five"; // int type has value char[5]
  int c = "c"; // int type has value char[2]
  char f = "f"; // char type has value char[2]
  std::string s = 200; // no conversion from int to string
  std::string t = 't'; // no conversion from char to string


  // legal but wrong
  char d = 100; // int is promoted to char 'd' via widening conversion
  int sum = 10.5 + 1.2; // float is promoted to int via narrowing conversion rounded down

  // legal and correct
  char e = 'e';
  int total = 100;
  double total_with_cents = 99.99;
}