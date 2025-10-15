#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	stack<int> stk;
	vector<char> op;
	int cur = 1;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;

		while (cur <= num) {
			op.push_back('+');
			stk.push(cur);
			cur++;
		}
		if (!stk.empty() && stk.top() == num) {
			op.push_back('-');
			stk.pop();
		} else {
			cout << "NO\n";
			return 0;
		}
	}
	for (char c : op)
		cout << c << "\n";
	return 0;
}


