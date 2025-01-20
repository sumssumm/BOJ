#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];

	int x, cnt = 0;
	cin >> x;
	for (int i = 0; i < n; ++i) {
		if (v[i] == x)
			cnt++;
	}
	cout << cnt;
}