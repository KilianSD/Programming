#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

int romanToInt(std::string s) {
        int result = 0;
        std::map<char, int> m {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for(int i =0; i < s.length(); i++){
            if(m[s[i]] < m[s[i+1]]){
                result += m[s[i+1]] - m[s[i]];
                i+= 1;
            } else {
                result += m[s[i]];
            }
        }

        return result;
}

int main(int argc, char** argv){
  std::cout << romanToInt("MCMXCIV") << std::endl;
  return 0;
}
