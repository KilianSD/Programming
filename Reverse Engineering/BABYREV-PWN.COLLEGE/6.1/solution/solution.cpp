#include <iostream>
#include <string>
#include <cassert>
#include <vector>
#include <algorithm>

int main(int argc, char** argv){
  /*std::vector<uint64_t> input_buffer = {'A', 'B', 'C', 'D', 'E',
                                              'A', 'B', 'C', 'D', 'E',
                                              'A', 'B', 'C', 'D', 'E'
                                             };
  */

  std::vector<int64_t> input_buffer = {0x41, 0x42, 0x43, 0x44, 0x45, 0x41, 0x42, 0x43, 0x44, 0x45, 0x41, 0x42, 0x43, 0x44, 0x45 };
  int s = 0;
  for(int i = 0; i < 0xf; i++){
    s = i % 3;
    if(s == 2){
      input_buffer[s] ^= 0x33;
      std::cout << "[" << i <<"]" << "XORRING " << input_buffer[s] << " WITH " << " 0x33" << " = " << input_buffer[s] << std::endl;
    }
    if (s < 3) {
      if(s == 0){
        input_buffer[s] ^= 0xc7;
        std::cout << "[" << i << "] "<< "XORRING " << input_buffer[s] << " WITH " << " 0xc7" << " = " << input_buffer[s] << std::endl;
      }
      if(s == 1){
        input_buffer[s] ^= 0xba;
        std::cout << "[" << i << "] " << "XORRING " << input_buffer[s] << " WITH " << " 0x33" << " = " << input_buffer[s] << std::endl;
      }
    }
  }

  for(int i = 0; i < 0xe; i++){
    for(int j = 0; j < 0xe - j; j++){
      if(input_buffer[j] > input_buffer[j+1]){
        uint64_t t = input_buffer[j];
        input_buffer[j] = input_buffer[j+1];
        input_buffer[j+1] = t;
        std::cout << "SWAPPING " << input_buffer[j] << " WITH " << input_buffer[j+1] << "\n";
      }
    }
  }

  for(int i = 0; i < 0xf; i++){
    int o = i % 3;
    if(o == 2){
      input_buffer[i] ^= 0x57;
    }
    if(s < 3){
      if(s == 0){
        input_buffer[i] ^= 0x4b;
      }
      if(s == 1){
        input_buffer[i] ^= 0x6a;
      }
    }
  }
  std::cout << "GENERATED LICENSE : " << "\n";
  std::for_each(input_buffer.begin(), input_buffer.end(), [](const unsigned char i){
                std::cout << i;
                                        });
  std::cout << "\n";
  return 0;
}
