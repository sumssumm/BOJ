#include <algorithm>
#include <iostream>

int main() {
  int arr[3] = {0};

  for (int i = 0; i < 3; ++i) {
    std::cin >> arr[i];
    if (arr[i] < 0 || arr[i] > 100) return 1;
  }
  std::sort(arr, arr + 3);
  std::cout << arr[1] << "\n";
  return 0;
}