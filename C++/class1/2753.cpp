#include <iostream>

int main() {
  int year = 0;
  std::cin >> year;
  if (1 > year || year > 4000) return 1;
  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    std::cout << "1" << std::endl;
  else
    std::cout << "0" << std::endl;
  return 0;
}