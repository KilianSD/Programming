#include <iostream>

bool lovefunc(int f1, int f2) {
  return ((f1 % 2 == 0 && f2 % 2 != 0) || (f2 % 2 == 0 && f1 % 2 != 0));
}

int main(int argc, char** argv){
  std::cout << (lovefunc(1,2) == 1 ? "true" : "false") << std::endl;
  std::cout << (lovefunc(0,3) == 1 ? "true" : "false") << std::endl;
  std::cout << (lovefunc(2,2) == 1 ? "true" : "false") << std::endl;
  return 0;
}
