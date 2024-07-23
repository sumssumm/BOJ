#include <iostream>

int main() {
  int N = 0, X = 0;
  std::cin >> N >> X;
  if (N < 1 || N > 10000 || X < 1 || X > 10000) return 0;
  int *A = new int[N];
  for (int i = 0; i < N; i++) {
    std::cin >> A[i];
    if (A[i] < 1 || A[i] > 10000) {
      delete[] A;
      return 0;
    }
    if (A[i] < X) std::cout << A[i] << ' ';
  }
  delete[] A;

  return 0;
}