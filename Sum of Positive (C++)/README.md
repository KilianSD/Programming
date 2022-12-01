# Sum of Positive (C++)
You get an array of numbers, return the sum of all the positive ones.

**Example :**
```
[1,-4,7,12] => 1 + 7 + 12 = 20
```

*Note if there's nothing to sum, the sum is default to 0*

```cpp
#include <vector>
#include <algorithm>

int positive_sum(const std::vector<int> arr){
  int result = 0;
  std::for_each(arr.begin(), arr.end(), [&](const int& i){
                if(i > 0) result += i;
                });
  return result;
}
```

```cpp
int positive_sum(const std::vector<int> arr){
  int result = 0;
  for(int i = 0; i < arr.size(); i++){
    if(arr[i] > 0) result += arr[i];
  }
  return result;
}
```
