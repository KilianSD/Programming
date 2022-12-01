#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

const std::map<std::string, const char*> m = {
    {"1", "L"},
    {"3", "E"},
    {"0", "O"},
    {"5", "S"},
    {"7", "T"},
    {"6", "G"},
    {"8", "B"},
    {"4", "A"},
  };

/* replace every character instance from the map with it's character representation */
std::string replaceOccurenceScrambledString(std::string str){
  std::for_each(m.begin(), m.end(), [&](const auto& v){
                  if((str.find(v.first)) != std::string::npos){
                    do{
                      str.replace(str.begin() + str.find(v.first), (str.begin() + (str.find(v.first)+1)), v.second);
                    } while((str.find(v.first)) != std::string::npos);
                  }
                });

  return str;
}

/* remove every character instance from the map from the string argument */
std::string removeOccurenceScrambledString(std::string str){
  std::for_each(m.begin(), m.end(), [&](const auto& v){
                  if((str.find(v.first)) != std::string::npos){
                    do{
                      str.erase(str.begin() + str.find(v.first));
                    } while((str.find(v.first)) != std::string::npos);
                  }
                });
  return str;
}

int main(int argc, char** argv){
  std::cout << "H3110 W0R1D : " << replaceOccurenceScrambledString("H3110 W0R1D") << std::endl;
  std::cout << "H3110 W0R1D : " << removeOccurenceScrambledString("H3110 W0R1D") << std::endl;
  return 0;
}
