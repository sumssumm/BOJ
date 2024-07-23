#include <iostream>

int main() {
  long n = 0, m = 0;
  long result = 0;
  if (n <= -2000000000 || n >= 2000000000 || m <= -2000000000 ||
      m >= 2000000000)
    return 1;
  std::cin >> n >> m;
  result = n - m;
  if (result < 0)
    std::cout << -result << std::endl;
  else
    std::cout << result << std::endl;
}