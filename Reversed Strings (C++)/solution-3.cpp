#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::string reverseString(std::string str) {
  int l = str.length();
  for(int i = 0; i < l / 2; i++){
    std::swap(str[i], str[l - i - 1]);
  }
  return str;
}

int main(int argc, char** argv){
  std::cout << reverseString("hello") << std::endl;
  std::cout << reverseString("Pass the joint") << std::endl;
  return 0;
}
