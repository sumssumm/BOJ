#include <iostream>

int main() {
  int a = 0;

  std::cin >> a;
  while (a != 0) {
    for (int i = 0; i < a; ++i) {
      for (int j = 0; j <= i; ++j) std::cout << "*";
      std::cout << "\n";
    }
    std::cin >> a;
  }
}