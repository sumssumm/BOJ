#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n = 0, a = 0, b = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> a >> b;
    if (a < 1 || a > 1000 || b < 1 || b > 1000) return 0;
    std::cout << a + b << '\n';
  }
  return 0;
}