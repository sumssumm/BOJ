#include <iostream>

int main() {
  int x = 0, y = 0;
  std::cin >> x >> y;
  if (x < -1000 || x > 1000 || y < -1000 || y > 1000 || x == 0 || y == 0)
    return 1;
  if (x > 0 && y > 0)
    std::cout << "1" << std::endl;
  else if (x < 0 && y > 0)
    std::cout << "2" << std::endl;
  else if (x < 0 && y < 0)
    std::cout << "3" << std::endl;
  else
    std::cout << "4" << std::endl;
}