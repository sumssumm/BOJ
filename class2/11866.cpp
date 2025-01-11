#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	queue<int> que;
	for (int i = 1; i <= N; ++i)
		que.push(i);
	
	cout << "<";
	while (!que.empty()) {
		for (int i = 0; i < K - 1; ++i) {
			que.push(que.front());
			que.pop();
		}
		cout << que.front();
		que.pop();
		if (que.empty())
			cout << ">\n";
		else
			cout << ", ";
	}
	return 0;
}
