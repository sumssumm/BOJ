#include <cmath>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> num(5);
  for (int i = 0; i < 5; ++i) {
    std::cin >> num[i];
    if (num[i] < 0 || num[i] > 9) return 1;
  }

  int sum = 0;
  for (int i = 0; i < 5; ++i) sum += pow(num[i], 2);

  std::cout << sum % 10 << "\n";
  return 0;
}