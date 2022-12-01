#include <iostream>
#include <string>

bool solution(const std::string& str, const std::string& ending) {
  return str.size() >= ending.size() && str.compare(str.size() - ending.size(), std::string::npos, ending) == 0;
}

int main(int argc, char** argv){
  std::cout << (solution("abcde", "de") ? "true" : "false") << std::endl;
  return 0;
}
