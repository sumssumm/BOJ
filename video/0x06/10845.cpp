#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	queue<int> q;
	while (n--) {
		string str;
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			q.push(x);
		} else if (str == "pop") {
			if (q.empty())
				cout << "-1\n";
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		} else if (str == "size")
			cout << q.size() << "\n";
		else if (str == "empty") {
			if (q.empty())
				cout << "1\n";
			else 
				cout << "0\n";
		} else if (str == "front") {
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.front() << "\n";
		} else {
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.back() << "\n";
		}
	}
}