#include <iostream>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int min = (N < M ? N : M);

  for (int i = min; i > 0; i--) {
    if (N % i == 0 && M % i == 0) {
      cout << i << "\n";
      cout << N * M / i << "\n";
      break;
    }
  }
  return 0;
}