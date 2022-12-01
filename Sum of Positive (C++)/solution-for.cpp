#include <vector>
#include <iostream>
#include <algorithm>

int positive_sum(const std::vector<int> arr){
  int result = 0;
  for(int i = 0; i < arr.size(); i++){
    if(arr[i] > 0) result += arr[i];
  }
  return result;
}
int main(int argc, char** argv){
  std::cout << positive_sum({1,-1,3,-5,3,3,5,2,-9}) << std::endl;
  return 0;
}
