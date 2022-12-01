#include <iostream>
#include <vector>
#include <numeric>

int sum(std::vector<int> nums){
  return std::accumulate(nums.begin(), nums.end(), 0);
}

int main(int argc, char** argv){
  std::cout << sum(std::vector<int>{}) << std::endl;
  std::cout << sum(std::vector<int>{5}) << std::endl;
  std::cout << sum(std::vector<int>{1,2,3,4}) << std::endl;
  std::cout << sum(std::vector<int>{1,2,-3,3,4}) << std::endl;
  return 0;
}
