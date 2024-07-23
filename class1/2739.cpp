#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;
  if (n < 1 || n > 9) return 1;
  for (int i = 1; i < 10; i++)
    std::cout << n << " * " << i << " = " << n * i << "\n";
  return 0;
}