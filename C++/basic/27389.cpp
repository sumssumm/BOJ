#include <iomanip>
#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;
  if (n < 0 || n > 100000) return 1;
  std::cout << std::fixed << std::setprecision(2) << (double)n / 4 << "\n";
  return 0;
}