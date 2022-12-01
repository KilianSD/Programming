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

int main(int argc, char** argv){
  std::cout << calcAverage({1,4,5,3}) << std::endl;
  return 0;
}
