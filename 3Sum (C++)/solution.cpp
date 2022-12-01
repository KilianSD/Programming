#include <iostream>
#include <algorithm>
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
  for(int i = 0; i < m[d[0]].length(); i++){
    std::string currentCharacter = "";
    currentCharacter += m[d[0]][i];
    for(int j = 1; j < d.size(); j++){
      for(int z = 0; z < m[d[j]].length(); z++){
        std::string secondCharacter(1, m[d[j]][z]);
        result.push_back(currentCharacter + secondCharacter);
        secondCharacter.clear();
      }
    }
    currentCharacter.clear();
  }
  return result;
}

int main(int argc, char** argv){
  letterCombinations("234");
  std::cout << std::endl;
  letterCombinations("3435");
  std::cout << std::endl;
  letterCombinations("1");
  letterCombinations("5938");
  std::cout << std::endl;
  letterCombinations("549837");
  return 0;
}
