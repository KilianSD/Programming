/*
 * * * * * * * * * * * * [MADE BY GRRRRREMLIN] * * * * * * * * * * * * *
 *
 * the program is done and fully works however there's still a problem,
 * i didn't realized that "prefix" means at the beginning of the string...
 * this program will try and search the longest sequence shared among a
 * vector of strings (not the prefix).
 *
 * change DEBUG_LEVEL to 2 if you want more information about what is
 * happening in the background (highly helpful when something wrong is
 * happening !).
 * */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

#define DEBUG_LEVEL 1
#define DEBUG

std::string longestCommonPrefix(std::vector<std::string>& strs){
  int longestString = 0;
  /* find the longest string in the vector */
  for(int i = 0; i < strs.size(); i++){
    if(strs[longestString].length() < strs[i].length()){
      longestString = i;
    }
  }
#ifdef DEBUG
  if(DEBUG_LEVEL == 2)
    std::cout << "Longest String : " << strs[longestString] << "\n";
#endif
  /* find common prefix */
  std::string prefixstring = strs[longestString];
  /* erase the longest string from our vector since we stored it as our prefixstring */
  if(strs.size() > 1) strs.erase(strs.begin() + longestString);
  std::string currentPrefix = "";
  std::string longestPrefix = "";
  /* loop on each character of the longest string we found in our vector of strings */
  for(int i = 0; i < prefixstring.length(); i++){
    /* try to find character per character */
    currentPrefix.push_back(prefixstring[i]);
    /* loop on each string in our vector */
    for(int j = 0; j < strs.size(); j++){
      if((strs[j].find(currentPrefix)) == std::string::npos){
        /* pop back since we didn't find a sequence with the last char */
        currentPrefix.pop_back();
        /* set the longestPrefix to the currentPrefix (without the last char we just popped) */
        if(currentPrefix.length() > 0) longestPrefix = currentPrefix;
#ifdef DEBUG
        if(DEBUG_LEVEL == 2)
          std::cout << "Sequence Broken, Clearing the Current Prefix of " << currentPrefix << std::endl;
#endif
        /* clear out and try to find a bigger sequence */
        currentPrefix.clear();
        break;
      } else {
#ifdef DEBUG
        if(DEBUG_LEVEL == 2)
          std::cout << "Found " << currentPrefix << " in " << strs[j] << "\n";
#endif
      }
    }
#ifdef DEBUG
    if(DEBUG_LEVEL == 2)
      std::cout << "Current Longest Prefix : " << longestPrefix << std::endl;
#endif
  }

  if(longestPrefix.length() < currentPrefix.length()){
    longestPrefix = currentPrefix;
  }

#ifdef DEBUG
  std::cout << "Final Longest Prefix : " << longestPrefix << std::endl;
#endif

  return longestPrefix;
}

int main(int argc, char** argv){
  std::vector<std::string> v = {"Vazina", "Vagina", "Varina", "Vakina"};
  std::vector<std::string> s = {"flower", "flow", "flight"};
  std::vector<std::string> z = {"dog", "racecar", "car"};
  std::vector<std::string> k = {"cir","car"};
  assert(longestCommonPrefix(v) == "ina");
  assert(longestCommonPrefix(s) == "fl");
  assert(longestCommonPrefix(z) == "");
  assert(longestCommonPrefix(k) == "c");
  return 0;
}
