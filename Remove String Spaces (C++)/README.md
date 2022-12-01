# Remove String Spaces
Simple, remove the spaces from the string, then return the resultant string.

**Solved with :**
```cpp
#include <iostream>
#include <string>

std::string no_space(const std::string& x)
{
  std::string i = x;
  if((i.find(" ")) != std::string::npos){
      do{
            i.erase(i.begin() + i.find(" "));
                } while((i.find(" ")) != std::string::npos);
        }
     return i;
}
```

*I had the head away while solving this, so i solved it with the worst solution possible... the best way to solve this challenge is in the best-practice.cpp file.
