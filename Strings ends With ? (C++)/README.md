# Strings Ends With ? (C++)
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:
```
solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false
```

Solution:
```cpp
#include <iostream>
#include <string>

bool solution(const std::string& str, const std::string& ending) {
  return str.size() >= ending.size() && str.compare(str.size() - ending.size(), std::string::npos, ending) == 0;
}

int main(int argc, char** argv){
  std::cout << (solution("abcde", "de") ? "true" : "false") << std::endl;
  return 0;
}
```
