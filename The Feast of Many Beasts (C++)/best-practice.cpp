#include <iostream>
#include <string>

bool feast(std::string beast, std::string dish){
  return beast.front() == dish.front() && beast.back() == dish.back();
}

int main(int argc, char** argv){
  std::cout << feast("Hello World", "Hello Worlz") << std::endl;
  std::cout << feast("Hello World", "Hello World") << std::endl;
  return 0;
}
