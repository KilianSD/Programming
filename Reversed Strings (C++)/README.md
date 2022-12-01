# Reversed Strings (C++)
Really really overly basic stuff here, but still decided to put it in this repo... probably won't be super useful.

The challenge is from [codewars](https://codewars.com), it's one of the easiest one to complete, we're asked to write a function that reverse a string and returns it. Since there is a load of ways to reverse a string in C++ i will put as much solutions as i can in this repository (makes the directory a little less boring).

```cpp
#include <string>

std::string reverseString(const std::string& str){
  return std::string(str.rbegin(), str.rend());
}
```
