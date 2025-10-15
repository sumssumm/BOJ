#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  int score[301] = {0};
  int dp[301] = {0};

  for (int i = 1; i <= n; i++) cin >> score[i];

  dp[1] = score[1];
  if (n >= 2) dp[2] = score[1] + score[2];
  if (n >= 3) dp[3] = max(score[1] + score[3], score[2] + score[3]);

  for (int i = 4; i <= n; i++) {
    dp[i] = max(dp[i - 2] + score[i], dp[i - 3] + score[i - 1] + score[i]);
  }

  cout << dp[n] << "\n";
  return 0;
}
