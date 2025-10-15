#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k, ans = 0;
	cin >> n >> k;

	int arr[2][7] = {0};
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		arr[a][b]++;
	}

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 7; ++j) {
			ans += arr[i][j] / k;
			if (arr[i][j] % k) ans++;
		}
	}
	cout << ans;
}