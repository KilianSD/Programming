# Calculate Average (C++)
Write a function which calculates the average of the numbers in a given list.

Note: Empty arrays should return 0.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

double calcAverage(const std::vector<int>& values){
  double res = 0;
  std::for_each(values.begin(), values.end(), [&](const int& v){
                  res += v;
                });
  return res / values.size();
}
```
