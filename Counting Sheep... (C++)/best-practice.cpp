#include <iostream>
#include <algorithm>
#include <vector>

int count_sheep(std::vector<bool> v) {
  return std::count(v.cbegin(), v.cend(), true);
}

int main(int argc, char** argv){
  std::cout << count_sheep({true,false,true,true,true,true,true,true,true,true,false,false,false,true,true,true,false,true,true,false,true,false,true}) << std::endl;
  return 0;
}
