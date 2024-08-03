#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  vector<int> count(10001, 0);

  for (int i = 0; i < N; ++i) {
    int num;
    cin >> num;
    count[num]++;
  }

  for (int num = 1; num <= 10000; ++num) {
    while (count[num] > 0) {
      cout << num << '\n';
      count[num]--;
    }
  }

  return 0;
}
