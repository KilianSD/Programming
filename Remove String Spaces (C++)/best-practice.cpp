#include <iostream>
#include <string>
#include <algorithm>

std::string no_space(std::string x){
  x.erase(std::remove(x.begin(), x.end(), ' '), x.end());
  return x;
}

int main(int argc, char** argv){
  std::cout << no_space("Hello World") << std::endl;
  return 0;
}
