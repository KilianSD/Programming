#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <array>
#include <algorithm>

std::vector<uint64_t> symmetricDifference(std::vector<uint64_t>& v1, std::vector<uint64_t>& v2){
  std::vector<uint64_t> result = {};
  /* find the biggest array */

  for(int i = 0; i < v1.size(); i++){
    if(std::find(v2.begin(), v2.end(), v1[i]) != v2.end()){
      std::cout << "Not a Symmetric Difference : " << v1[i] << std::endl;
    } else if(std::find(result.begin(), result.end(), v1[i]) == result.end()) {
        result.push_back(v1[i]);
    }
  }

  for(int i = 0; i < v2.size(); i++){
    if(std::find(v1.begin(), v1.end(), v2[i]) != v1.end()){
      std::cout << "Not a Symmetric Difference : " << v2[i] << std::endl;
    } else if(std::find(result.begin(), result.end(), v2[i]) == result.end()) {
        result.push_back(v2[i]);
    }
  }

  std::for_each(result.begin(), result.end(), [](const uint64_t& i){
                  std::cout << i << std::endl;
                });
//    }
}

int main(int argc, char** argv){
  std::vector<uint64_t> v1 = {1,8,2,3};
  std::vector<uint64_t> v2 = {8,5,2,1,4};
  symmetricDifference(v1, v2);
  return 0;
}
