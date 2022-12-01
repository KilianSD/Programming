#include <iostream>
#include <vector>

int sum(std::vector<int> nums){
  int res = 0;
  for(int i = 0; i < nums.size(); i++){
    res += nums[i];
  }
  return res;
}

int main(int argc, char** argv){
  std::cout << sum(std::vector<int>{}) << std::endl;
  std::cout << sum(std::vector<int>{5}) << std::endl;
  std::cout << sum(std::vector<int>{1,2,3,4}) << std::endl;
  std::cout << sum(std::vector<int>{1,2,-3,3,4}) << std::endl;
  return 0;
}
