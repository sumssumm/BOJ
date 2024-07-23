#include <iostream>

int main() {
  int a = 0, b = 0, cnt = 0;
  std::cin >> cnt;
  for (int i = 0; i < cnt; i++) {
    std::cin >> a >> b;
    if (a < 1 || a > 9 || b < 1 || b > 9) return 1;
    std::cout << a + b << "\n";
  }
}