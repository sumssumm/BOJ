#include <iostream>

int main() {
  int a = -1, b = -1;

  while (std::cin >> a >> b) {
    if (a < 1 || a > 9 || b < 1 || b > 9) return 1;
    std::cout << a + b << "\n";
  }
  return 0;
}