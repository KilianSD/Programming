#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <map>
#include <cassert>

int removeDuplicates(std::vector<int> nums) {
  for(int i = 0; i < nums.size(); i++){
    for(int k = 0; k < nums.size(); k++){
      if(i != k){
        /* check if they are the same */
        if(nums[i] == nums[k]){
          nums.erase(nums.begin() + k);
        }
      }
    }
  }
  return nums.size();
}

int main(int argc, char** argv){
  std::vector<int> t = {5,4,2,2,3,1,2,3,2,1,2,3};
  assert(removeDuplicates(t) == 5);
  return 0;
}
