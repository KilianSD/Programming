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
