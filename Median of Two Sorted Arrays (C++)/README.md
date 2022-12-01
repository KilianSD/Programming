# Median of Two Sorted Arrays (C++)
In statistics and probability theory, the **median** is the value separating the **higher half** from the **lower half** of a data sample, a population, or a probability distribution. For a data set, it may be tought of as the "middle" value.

The median of a finite list of numbers is the "middle" number, when those numbers are listed in order from smallest to greatest.

If the data set has an odd numbers of values, the middle one is selected. For example, the following list of seven numbers.

```
1, 3, 3, 6, 7, 8, 9 <- median is 6 (the "middle" value)
```

If the data set has an even number of values, there is no distinct middle value and is usually defined to be the **arithmetic mean** of the two middle values. For example this data set of  8 numbers.

```
1, 2, 3, 4, 5, 6, 7, 8, 9 <- median is 4.5 (4 + 5 / 2)
```

With this in mind we should be ready to start tackling this challenge.

# Challenge
The challenge is available on [leetcode](https://leetcode.com/problems/median-of-two-sorted-arrays/), it was ranked as **hard** but was pretty straight forward to solve, we are given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return **the median** of the two sorted arrays. 

**Example 1:**
```
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
```

**Example 2:**
```
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2+3) / 2 = 2.5
```

# Solution
I ended up solving the program with a pretty straight forward solution, it took me about 15 minutes to solve since i hadn't worked with the median in quite some time but a quick googling answered my questions easily enough.

**Solution:**
```cpp
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

double findMedianSortedArrays(std::vector<int> nums1, std::vector<int> nums2){
  nums1.insert(nums1.end(), nums2.begin(), nums2.end());
  sort(nums1.begin(), nums1.end());
  if(nums1.size()% 2 != 0){
    return (double)nums1[(nums1.size() - 1 ) / 2];

  } else if(nums1.size()% 2 == 0){
      return (double)((double)(nums1[(nums1.size() / 2) - 1] + (double)nums1[((nums1.size()/ 2) + 1) - 1]) / 2);

  }

  return 0.0;
}

int main(int argc, char** argv){
  std::cout << "Median of {1,2,3,4,5,6,7} : " << findMedianSortedArrays({1,2,3}, {4,5,6,7}) << std::endl;
  std::cout << "Median of {1,2,3,4,5,6,7,8} : " << findMedianSortedArrays({1,2,3}, {4,5,6,7,8}) << std::endl;
  std::cout << "Median of {0,0,0,0} : " << findMedianSortedArrays({0, 0}, {0, 0}) << std::endl;
  std::cout << "Median of {1,2,3,4} : " << findMedianSortedArrays({1, 2}, {3, 4}) << std::endl;
  return 0;
}
```