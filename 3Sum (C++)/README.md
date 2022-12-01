# 3Sum (C++)
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/7/73/Telephone-keypad2.svg/200px-Telephone-keypad2.svg.png)

**Example 1**:
```
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
```

**Example 2:**
```
Input: digits = ""
Output: []
```

**Example 3:**
```
Input: digits = "2"
Output: ["a","b","c"]
```

**Constraints:**
- 0 <= digits.length <= 4
- digits[i] is a digit in the range ['2', '9'].

**Solved With:**
```cpp
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
```
