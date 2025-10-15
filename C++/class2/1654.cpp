#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, K;
	cin >> K >> N;

	vector<int> v(K);
	for (int i = 0; i < K; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	
	long long low = 1;
	long long high = v[K - 1];
	long long len = 0;
	while (low <= high) {
		long long mid = (low + high) / 2;
		int cnt = 0;
		for (int i = 0; i < K; ++i)
			cnt += v[i] / mid;
		if (cnt >= N) {
			len = mid;
			low = mid + 1;
		} else
			high = mid - 1;
	}
	cout << len << "\n";
	return 0;
}