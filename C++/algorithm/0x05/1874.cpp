#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	int cur = 1;
	stack<int> s;
	string op;
	while (n--) {
		int t;
		cin >> t;
		while (cur <= t) {
			s.push(cur++);
			op += "+\n";
		}
		if (s.top() != t) {
			cout << "NO\n";
			return 0;
		}
		s.pop();
		op += "-\n";
	}	
	cout << op;
}