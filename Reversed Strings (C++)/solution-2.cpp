#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::string reverseString(std::string& str) {
  std::reverse(str.begin(), str.end());
  return str;
}


std::string reverseString(std::string str) {
  std::reverse(str.begin(), str.end());
  return str;
}

int main(int argc, char** argv){
  std::cout << reverseString("hello") << std::endl;
  std::cout << reverseString("Pass the joint") << std::endl;
  return 0;
}
