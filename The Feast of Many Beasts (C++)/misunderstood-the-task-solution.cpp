/*
 * probably not a best practice, but not a bad solution either to my eyes
 * i did not understand the task properly when i first wrote this solution
 * i wrote a program that checks the first letter of each word and check if
 * they are the same.
*/

#include <iostream>
#include <string>
#include <cctype>

bool feast(std::string beast, std::string dish){
  if(std::tolower(beast[0]) == std::tolower(dish[0])){
    if((beast.find(" ")) != std::string::npos && (dish.find(" ")) != std::string::npos){
      if(std::tolower(beast[beast.find(" ") + 1]) != std::tolower(dish[dish.find(" ") + 1])){
        return true;
      };
    }
    return true;
  }
  return false;
}

int main(int argc, char** argv){
  std::cout << feast("Hello WOrld", "hello World") << std::endl;
  return 0;
}
