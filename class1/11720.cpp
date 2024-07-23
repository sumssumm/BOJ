#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;
  if (n < 0 || n > 100) return 1;

  std::string str;
  std::cin >> str;
  if (str.size() != n) return 1;

  int sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += str[i] - '0';
  }
  std::cout << sum << "\n";
  return 0;
}