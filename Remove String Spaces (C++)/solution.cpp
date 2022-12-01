#include <iostream>
#include <string>

std::string no_space(const std::string& x)
{
  std::string i = x;
  if((i.find(" ")) != std::string::npos){
      do{
            i.erase(i.begin() + i.find(" "));
                } while((i.find(" ")) != std::string::npos);
        }
     return i;
}

int main(int argc, char** argv)
{
  std::string x = "Hello World";
  std::cout << no_space(x) << std::endl;
  return 0;
}
