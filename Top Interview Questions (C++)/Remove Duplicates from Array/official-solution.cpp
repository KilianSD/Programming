#include <iostream>
#include <vector>
#include <algorithm>


int removeDuplicates(std::vector<int>& nums){
  nums.resize(std::distance(nums.begin(), std::unique(nums.begin(), nums.end())));
  return nums.size();
}
int main(int argc, char** argv){
  std::vector<int> nums = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9};
  std::cout << removeDuplicates(nums) << std::endl;
}
