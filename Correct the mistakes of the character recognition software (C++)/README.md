# Correct the Mistakes of the Character Recognition Software (C++)
Character recognition software is widely used to digitise printed texts. Thus the texts can be edited, searched and stored on a computer.

When documents (especially pretty old ones written with a typewriter), are digitised character recognition softwares often make mistakes.

Your task is correct the errors in the digitised text. You only have to handle the following mistakes:
  - S is misinterpreted as 5
  - O is misinterpreted as 0
  - I is misinterpreted as 1

The test cases contain numbers only by mistake.

**Solved With :**
```cpp
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

const std::map<std::string, const char*> m = {
  {"1", "I"},
  {"0", "O"},
  {"5", "S"}
};

std::string correct(std::string str){
  std::for_each(m.begin(), m.end(), [&](const auto& v){
                  if((str.find(v.first)) != std::string::npos){
                    do{
                      str.replace(str.begin() + str.find(v.first), (str.begin() + (str.find(v.first) + 1)), v.second);
                    } while((str.find(v.first)) != std::string::npos);
                  }
                });
  return str;
}

int main(int argc, char** argv){
  std::cout << "H1 W0RLD : " << correct("H1 W0RLD") << std::endl;
  return 0;
}
```
