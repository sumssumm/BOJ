#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<pair<int, int> > a(N);
	for (int i = 0; i < N; ++i) {
		cin >> a[i].second >> a[i].first;
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < N; ++i)
		cout << a[i].second << " " << a[i].first << "\n";
}