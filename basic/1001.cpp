#include <iostream>

int main() {
  unsigned long a = 0, b = 0, c = 0;

  std::cin >> a >> b >> c;
  if (a > 0 && a <= 1000000000000 && b > 0 && b <= 1000000000000 && c > 0 &&
      c <= 1000000000000)
    std::cout << a + b + c << std::endl;
  return 0;
}