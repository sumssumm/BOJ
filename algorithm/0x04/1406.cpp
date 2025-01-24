#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int n;
	cin >> n;

	list<char> l;
	for (int i = 0; i < str.length(); ++i)
		l.push_back(str[i]);
	auto it = l.end();
	while (n--) {
		char c;
		cin >> c;
		if (c == 'L')
		{
			if (it != l.begin())
				--it;
		}
		else if (c == 'D') {
			if (it != l.end())
				++it;
		}
		else if (c == 'B') {
			if (it != l.begin()) {
				--it;
				it = l.erase(it);
			}
		}
		else if (c == 'P') {
			char x;
			cin >> x;
			l.insert(it, x);
		}
	}
	for (auto c : l)
		cout << c;
}