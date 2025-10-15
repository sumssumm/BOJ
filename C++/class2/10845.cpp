#include <iostream>
#include <queue>
#include <string>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	queue<int> q;
	for (int i = 0; i < N; ++i) {
		string str;
		cin >> str;
		if (str == "push") {
			int num;
			cin >> num;
			q.push(num);
		} else if (str == "pop") {
			if (q.empty())
				cout << "-1\n";
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		} else if (str == "size")
			cout << q.size() << "\n";
		else if (str == "empty")
			cout << q.empty() << "\n";
		else if (str == "front") {
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.front() << "\n";
		} else if (str == "back") {
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.back() << "\n";
		}
	}
	return 0;
}