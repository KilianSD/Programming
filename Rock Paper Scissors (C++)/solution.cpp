#include <iostream>
#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
    if(p1 == p2)
      return "Draw!";
    if( ( p1[0] == 's' && p2[0] == 'p' )||
        ( p1[0] == 'p' && p2[0] == 'r' )||
        ( p1[0] == 'r' && p2[0] == 's' ) )
        return "Player 1 won!";
    return "Player 2 won!";
}

int main(int argc, char** argv){
  std::cout << rps("scissors", "paper") << std::endl;
  std::cout << rps("rock", "scissors") << std::endl;
  std::cout << rps("rock", "paper") << std::endl;
  return 0;
}
