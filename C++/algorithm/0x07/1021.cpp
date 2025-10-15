#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;

	deque<int> d;
	for (int i = 1; i <= n; ++i)
		d.push_back(i);
	int cnt = 0;
	while (m--) {
		int x;
		cin >> x;
		int a = find(d.begin(), d.end(), x) - d.begin();
		if (a > d.size() / 2) {
			while (d.front() != x) {
				d.push_front(d.back());
				d.pop_back();
				cnt++;
			}
		} else {
			while (d.front() != x) {
				d.push_back(d.front());
				d.pop_front();
				cnt++;
			}
		}
		if (x == d.front())
			d.pop_front();
	}
	cout << cnt;
}

