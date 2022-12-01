# Longest Common Prefix (C++)
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

**Example 1:**
```
Input: strs = ["flower","flow","flight"]
Output: "fl"
```

**Example 2:**
```
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
```

**Constraints:**
  - 1 <= strs.length <= 200
  - 0 <= strs[i].length <= 200
  - strs[i] consists of only lower-case English letters.

**Solving:**
I solved the challenge using the following code and it's apparently faster than 90% of submissions on the platform (big flex), it was relatively simple to do just a lot of thinking and some trial and error, i accidentally made a totally different program that found the biggest anagram in the whole word (not only the prefix) i saved it as `longest-common-prefix.cpp`...
```cpp
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
```
![big flex](https://i.imgur.com/pzDk8ZA.png)
