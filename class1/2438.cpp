#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;
  if (n < 1 || n > 100) return 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) std::cout << "*";
    std::cout << "\n";
  }
}