#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	deque<int> d;
	while (n--) {
		string str;
		cin >> str;
		int x;
		if (str == "push_front") {
			cin >> x;
			d.push_front(x);
		} else if (str == "push_back") {
			cin >> x;
			d.push_back(x);
		} else if (str == "pop_front") {
			if (d.empty())
				cout << "-1\n";
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
		} else if (str == "pop_back") {
			if (d.empty())
				cout << "-1\n";
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
		} else if (str == "size")
			cout << d.size() << "\n";
		else if (str == "empty") {
			if (d.empty())
				cout << "1\n";
			else 
				cout << "0\n";
		} else if (str == "front") {
			if (d.empty())
				cout << "-1\n";
			else
				cout << d.front() << "\n";
		} else {
			if (d.empty())
				cout << "-1\n";
			else
				cout << d.back() << "\n";
		}
	}
}