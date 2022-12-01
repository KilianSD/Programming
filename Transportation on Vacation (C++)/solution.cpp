#include <iostream>

int rental_car_cost(int d){
  return (d >= 7 ? ((d * 40) - 50) : d >= 3 ? ((d * 40) - 20) : (d * 40));
}

int main(int argc, char** argv){
  std::cout << rental_car_cost(1) << std::endl;
  std::cout << rental_car_cost(2) << std::endl;
  std::cout << rental_car_cost(3) << std::endl;
  std::cout << rental_car_cost(4) << std::endl;
  std::cout << rental_car_cost(5) << std::endl;
  std::cout << rental_car_cost(6) << std::endl;
  std::cout << rental_car_cost(7) << std::endl;
  std::cout << rental_car_cost(8) << std::endl;
  std::cout << rental_car_cost(9) << std::endl;
  std::cout << rental_car_cost(10) << std::endl;
  return 0;
}
