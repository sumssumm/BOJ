#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;
  if (n < 0 || n > 100) return 1;

  for (int i = 1; i <= n; ++i) {
    for (int j = n; j > 0; --j) {
      if (j <= i)
        std::cout << "*";
      else
        std::cout << " ";
    }
    std::cout << "\n";
  }
  return 0;
}