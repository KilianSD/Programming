#include <iostream>
#include <string>

bool feast(std::string beast, std::string dish){
  if(beast[0] == dish[0] && beast[beast.size() - 1] == dish[dish.size() - 1]) return true;
  return false;
}

int main(int argc, char** argv){
  std::cout << feast("Hello World", "Hello Worlz") << std::endl;
  return 0;
}
