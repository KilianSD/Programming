#include <iostream>
#include <vector>
#include <algorithm>

int removeDuplicates(std::vector<int>& nums){
  nums.resize(std::distance(nums.begin(), std::unique(nums.begin(), nums.end())));
  return nums.size();
}

int removeDuplicates(std::vector<int> nums){
  nums.resize(std::distance(nums.begin(), std::unique(nums.begin(), nums.end())));
  return nums.size();
}

int main(int argc, char** argv){
  std::cout << removeDuplicates({1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9}) << std::endl;
  std::cout << removeDuplicates({0,0,-1,-1,-2,-2,-4,-4}) << std::endl;
  std::cout << removeDuplicates({0,0,0,0,0,0}) << std::endl;
  return 0;
}
