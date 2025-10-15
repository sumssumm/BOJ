#include <iostream>

int main() {
  int n = 0;

  std::cin >> n;
  if (n < 1 || n > 100000) return 1;
  for (int i = 1; i <= n; i++) std::cout << i << "\n";
  return 0;
}