#include <iostream>
#include <string>

std::string even_or_odd(int number){
  return number % 2 == 0 ? "Even" : "Odd";
}

int main(int argc, char** argv){
  std::cout << even_or_odd(1) << std::endl;
  std::cout << even_or_odd(2) << std::endl;
  return 0;
}
