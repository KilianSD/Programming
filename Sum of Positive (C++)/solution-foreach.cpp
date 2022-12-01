#include <vector>
#include <iostream>
#include <algorithm>

int positive_sum(const std::vector<int> arr){
  int result = 0;
  std::for_each(arr.begin(), arr.end(), [&](const int& i){
                if(i > 0) result += i;
                });
  return result;
}
int main(int argc, char** argv){
  std::cout << positive_sum({1,-1,3,-5,3,3,5,2,-9}) << std::endl;
  return 0;
}
