#include <iostream>

int main() {
  int a = -1, b = -1;
  while (a != 0 && b != 0) {
    std::cin >> a >> b;
    if (a < 1 || a > 9 || b < 1 || b > 9) break;
    std::cout << a + b << "\n";
  }
  return 0;
}