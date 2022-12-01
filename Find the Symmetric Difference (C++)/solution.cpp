#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <array>
#include <algorithm>
#include <cassert>
/* could concatenate both arrays and completely remove every doubles */
std::vector<uint64_t> symmetricDifference(std::vector<uint64_t> v1, std::vector<uint64_t> v2){
  std::vector<uint64_t> result = {};
  for(int i = 0; i < v1.size(); i++){
    if(std::find(v2.begin(), v2.end(), v1[i]) == v2.end()){
      if(std::find(result.begin(), result.end(), v1[i]) == result.end()) {
        result.push_back(v1[i]);
      }
    }
  }

  for(int i = 0; i < v2.size(); i++){
    if(std::find(v1.begin(), v1.end(), v2[i]) == v1.end()){
      if(std::find(result.begin(), result.end(), v2[i]) == result.end()) {
        result.push_back(v2[i]);
      }
    }
  }
  return result;
}


template<typename T>
void show_vector_values(std::vector<T>& values){
  std::for_each(values.begin(), values.end(), [](const auto& value){
                  std::cout << value << std::endl;
                });
  return;
}

int main(int argc, char** argv){
  std::vector<uint64_t> e1 = {3,5,4};
  assert(symmetricDifference({1,8,2,3}, {8,5,2,1,4}) == e1);
  show_vector_values(e1);
  return 0;
}
