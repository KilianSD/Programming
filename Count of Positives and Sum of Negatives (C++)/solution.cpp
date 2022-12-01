#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  if(input.empty()) return {};
  std::vector<int> r = {0, 0};
  for(int i = 0; i < input.size(); i++){
    if(input[i] > 0){
      r[0] += 1;
    } else if(input[i] < 0) {
      r[1] += input[i];
    }
  }
    // go for it!
  return r;
}

template<typename T>
void readFromVector(std::vector<T>& i){
  std::for_each(i.begin(), i.end(), [](const T& t){
                  std::cout << t << std::endl;
                });
}

int main(int argc, char** argv){
  std::vector<int> t = countPositivesSumNegatives({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15});
  readFromVector(t);
  return 0;
}

