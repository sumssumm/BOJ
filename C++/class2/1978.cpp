#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
  if (n == 1)
    return false;
  for (int i = 2; i <= n / i; ++i) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin >> N;

  vector<int> num(N);
  int cnt = 0;
  for (int i = 0; i < N; ++i) {
    cin >> num[i];
    if (isPrime(num[i]))
      cnt++;
  }
  cout << cnt << "\n";
  return 0;
}