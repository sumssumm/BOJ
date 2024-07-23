#include <iostream>

int main() {
  long a = 0, b = 0;
  std::cin >> a >> b;
  if (a < 1 || a > 100000 || b < 1 || b > 100000) return 1;

  long res = (a + b) * (a - b);
  std::cout << res << "\n";
  return 0;
}