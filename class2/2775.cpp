#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  int sum = 0;
  int k, n;
  for (int i = 0; i < T; ++i) {
    cin >> k;
    cin >> n;
    for (int i = 0; i <= n; ++i) sum += i;
    cout << sum << "\n";
  }
  return 0;
}