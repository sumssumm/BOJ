#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	stack<int> s;
	long long cnt = 0;
	while (n--) {
		int h;
		cin >> h;
		while (!s.empty() && s.top() <= h)
			s.pop();
		cnt += s.size();
		s.push(h);
	}
	cout << cnt;
}