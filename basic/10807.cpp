#include <iostream>
#include <vector>

int main() {
  int N = 0;
  std::cin >> N;
  if (N < 1 || N > 100) return 0;

  std::vector<int> numbers(N);
  for (int i = 0; i < N; ++i) {
    std::cin >> numbers[i];
    if (numbers[i] > 100 || numbers[i] < -100) return 0;
  }

  int v = 0;
  std::cin >> v;
  if (v > 100 || v < -100) return 0;

  int cnt = 0;
  for (int i = 0; i < N; ++i) {
    if (numbers[i] == v) ++cnt;
  }
  std::cout << cnt << "\n";
  return 0;
}