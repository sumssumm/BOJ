#include <iostream>

int main() {
  int a = 0, b = 0;

  std::cin >> a >> b;
  if (a < -10000 || a > 10000 || b < -10000 || b > 10000) return 1;
  if (a == b)
    std::cout << "==" << std::endl;
  else if (a > b)
    std::cout << ">" << std::endl;
  else
    std::cout << "<" << std::endl;
  return 0;
}