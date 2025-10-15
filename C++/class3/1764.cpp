#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;

	set<string> s1, s2;
	while (N--)
	{
		string str;
		cin >> str;
		s1.insert(str);
	}

	while (M--) {
		string str;
		cin >> str;
		if (s1.count(str))
			s2.insert(str);
	}
	cout << s2.size() << "\n";
	for (auto &i : s2)
		cout << i << "\n";
	return 0;
}