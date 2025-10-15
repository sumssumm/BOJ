#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 0) {
		cout << "0\n";
		return 0;
	}
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	sort(a.begin(), a.end());
	double sum = 0;
	double cnt = 0;
	double p = round(n * 0.15);
	for (int i = p; i < n - p; ++i) {
		sum += a[i];
		cnt++;
	}
	cout << round(sum / cnt) << "\n";
	return 0;
}