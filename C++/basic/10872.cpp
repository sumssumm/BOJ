#include <iostream>

int main() {
  int n = 0;
  long f = 1;
  std::cin >> n;
  if (n < 0 || n > 12) return 1;
  for (int i = 1; i <= n; i++) f *= i;
  std::cout << f << "\n";
  return 0;
}