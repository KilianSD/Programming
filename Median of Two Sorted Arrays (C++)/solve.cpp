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
