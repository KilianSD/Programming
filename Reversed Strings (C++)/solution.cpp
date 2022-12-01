#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::string reverseString(const std::string& str) { return std::string(str.rbegin(), str.rend()); }

int main(int argc, char** argv){
  std::cout << reverseString("hello") << std::endl;
  std::cout << reverseString("Pass the joint") << std::endl;
  return 0;
}
