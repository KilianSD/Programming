#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int count_sheep(std::vector<bool> arr) {
  int count = 0;
  std::for_each(arr.begin(), arr.end(), [&](const bool& i){
                    if(i) count++;
                      });
    return count;
}


int main(int argc, char** argv){
  std::cout << count_sheep({true, false, true, false, true, false, true, true, true}) << std::endl;
  return 0;
}
