#include <iostream>
#include <string>
#include <vector>

std::string abbrevName(std::string name)
{
  std::string w1(1,toupper(name[0]));
  w1.push_back('.');
  w1.push_back(toupper(name[name.find(" ") + 1]));
  return w1;
}

int main(int argc, char** argv){
  std::cout << abbrevName("John Doe") << std::endl;
  std::cout << abbrevName("Jane Boe") << std::endl;
  return 0;
}
