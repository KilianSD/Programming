#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
#include <map>
#include <cstdlib>

std::vector<std::string> letterCombinations(std::string digits) {
  std::vector<int> d = {};
  std::vector<std::string> result = {};
  std::map<int, std::string> m = {
    {1, ""},
    {2, "abc"},
    {3, "def"},
    {4, "ghi"},
    {5, "jkl"},
    {6, "mno"},
    {7, "pqrs"},
    {8, "tuv"},
    {9, "wxyz"}
  };

  std::for_each(digits.begin(), digits.end(), [&](const char& u){
                  d.push_back((int)u - 48);
                });
  for(int i = 0; i < d.size(); i++){
      std::string currentSequence = m[d[i]];
      for(int j = 0; j < currentSequence.length(); j++){
        for(int k = 0; k < d.size(); k++){
          for(int z = 0; z < currentSequence.length(); z++){
            std::cout << currentSequence[j] << m[d[k]][z] << ", ";
            result.push_back(std::to_string(currentSequence[j]) + std::to_string(m[d[k]][z]));
          }
        }
        std::cout << "\n";
      }
    }
    return result;
}

int main(int argc, char** argv){
  letterCombinations("234");
  letterCombinations("3435");
  letterCombinations("1");
//  letterCombinations("5938");
//  letterCombinations("549837")
  return 0;
}
