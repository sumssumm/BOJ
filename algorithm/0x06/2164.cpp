#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	queue<int> q;
	for (int i = 1; i <= n; ++i)
		q.push(i);
	
	while (!q.empty()) {
		if (q.size() == 1) {
			cout << q.front();
			return 0;
		}
		q.pop();
		q.push(q.front());
		q.pop();
	}
}