#include <iostream>

int main() {
  int n = 0, m = 0;
  std::cin >> n >> m;
  if (n < 1 || n > 100 || m < 1 || m > 100) return 1;
  int arr1[n * 2][m];
  for (int i = 0; i < n * 2; ++i) {
    for (int j = 0; j < m; ++j) std::cin >> arr1[i][j];
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) std::cout << arr1[i][j] + arr1[i + n][j] << " ";
    std::cout << "\n";
  }
  return 0;
}