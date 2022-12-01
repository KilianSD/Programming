#include <iostream>
#include <algorithm>
#include <vector>

/* problematic, still need to fix */
int removeDuplicates(std::vector<int>& nums) {
  for(int i = 0; i < nums.size(); i++){
    for(int k = 0; k < nums.size(); k++){
      if(i != k){
        if(nums[i] == nums[k]){
          nums.erase(nums.begin() + k);
        }
      }
    }
  }
  std::for_each(nums.begin(), nums.end(), [](const int& i){
    std::cout << i << std::endl;
  });
  return nums.size();
}

int main(int argc, char** argv){
  std::vector<int> v = {1,1,1,1,1};
  removeDuplicates(v);
  return 0;
}
