#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int sum = 1;
  int cnt = 1;
  for (int i = 1; i < N; ++i) {
    if (sum >= N)
      break;
    sum += i * 6;
    cnt++;
  }
  cout << cnt << "\n";
  return 0;
}
