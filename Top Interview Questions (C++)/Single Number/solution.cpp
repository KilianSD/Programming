#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums) {
  bool found = false;
  for(int i = 0; i < nums.size(); i++){
    found = false;
    for(int k = 0; k < nums.size(); k++){
      if(k != i){
        if(nums[i] == nums[k]) {
          found = true;
          break;
        }
      }
    }
    if(!found) return nums[i];
  }
  return 0;
}

int main(int argc, char** argv){
  std::vector<int> v1 = {2,2,1};
  std::vector<int> v2 = {4,1,2,1,2};
  std::vector<int> v3 = {1};
  std::vector<int> v4 = {3,5,5,66,6,6,7,7,8,8,9,9};
  std::vector<int> v5 = {5, 5, 7, 7, 8, 8, 9, 9 ,1, 0};
  std::cout << singleNumber(v1) << std::endl;
  std::cout << singleNumber(v2) << std::endl;
  std::cout << singleNumber(v3) << std::endl;
  std::cout << singleNumber(v4) << std::endl;
  std::cout << singleNumber(v5) << std::endl;
  return 0;
}
