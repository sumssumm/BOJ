#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin >> T;

	vector<pair<int, int> > dp(41);
	dp[0] = {1, 0};
	dp[1] = {0, 1};
	for (int i = 2; i < 41; ++i) {
		dp[i] = {dp[i - 1].first + dp[i - 2].first, dp[i - 1].second + dp[i - 2].second};
	}

	while (T--) {
		int N;
		cin >> N;
		cout << dp[N].first << " " << dp[N].second << "\n";
	}
	return 0;
}