#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string>& strs){
  int longestString = 0;
  std::string finalprefix = "";
  bool equal = false;
  for(int i = 0; i < strs.size(); i++){
    if(strs[longestString].length() < strs[i].length()){
      longestString = i;
    }
  }
  std::string prefixstring = strs[longestString];
  if(strs.size() > 1) strs.erase(strs.begin() + longestString);
  for(int i = 0; i < prefixstring.length(); i++){
    for(int j = 0; j < strs.size(); j++){
      if(strs[j][i] != prefixstring[i]){
        equal = false;
        break;
      } else {
        equal = true;
      }
    }
    if(equal) {
      finalprefix.push_back(prefixstring[i]);
    } else {
      break;
    }
  }
  return finalprefix;
}

int main(int argc, char** argv){
  std::vector<std::string> v = {"Vazina", "Vagina", "Varina", "Vakina"};
  std::vector<std::string> s = {"flower", "flow", "flight"};
  std::vector<std::string> z = {"dog", "racecar", "car"};
  std::vector<std::string> k = {"cir","car"};
  std::vector<std::string> a = {"a"};
  assert(longestCommonPrefix(v) == "Va");
  assert(longestCommonPrefix(s) == "fl");
  assert(longestCommonPrefix(z) == "");
  assert(longestCommonPrefix(k) == "c");
  assert(longestCommonPrefix(a) == "a");
  return 0;
}
