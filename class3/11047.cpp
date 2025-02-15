#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];
	
	int cnt = 0;
	for (int i = n - 1; i >= 0; --i) {
		if (k >= v[i]) {
			cnt += k / v[i];
			k %= v[i];
		}
		if (k == 0)
			break ;
	}
	cout << cnt << "\n";
	return 0;
}