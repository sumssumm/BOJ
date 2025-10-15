#include <iostream>
#include <string>

using namespace std;

int digitSum(int num) {
  int sum = 0;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  int N;
  cin >> N;

  int M = 0;
  int start = N - 9 * to_string(N).length();
  if (start < 1)
    start = 1;

  for (int i = start; i < N; ++i) {
    if (i + digitSum(i) == N) {
      M = i;
      break;
    }
  }
  cout << M << "\n";
  return 0;
}