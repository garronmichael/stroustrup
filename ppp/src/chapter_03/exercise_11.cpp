#include <iostream>
#include <string>
#include <vector>
#include <map>

int main() {
  std::vector<std::string> computer_moves = {"paper", "rock", "scissors"};

  for (int i = 0; i < computer_moves.size(); ++i) {
    std::string computer_move = computer_moves[i];
    std::cout << "Let's play rock, paper, scissors!\n"
      << "Enter your move (rock, paper or scissors):\n";

    std::string player_move;
    std::cin >> player_move;

    std::cout << "You played: " << player_move << "!\n"
      << "I play: " << computer_move << "!\n";

    if (player_move == computer_move) {
      std::cout << "A tie!\n";
    } else if ((player_move == "paper" && computer_move == "rock")
               || (player_move == "scissors" && computer_move == "paper")
               || (player_move == "rock" && computer_move == "scissors")) {
      std::cout << "You win!\n";
    } else {
      std::cout << "I win!\n";
    }
  }

  std::cout << "Thanks for playing! I'm out of moves!\n";
}