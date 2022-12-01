#include <string>
#include <iostream>

std::string boolean_to_string(bool b){
  return (b ? "true" : "false");
}

int main(int argc, char** argv){
  std::cout << boolean_to_string(true) << std::endl;
  std::cout << boolean_to_string(false) << std::endl;
  return 0;
}
