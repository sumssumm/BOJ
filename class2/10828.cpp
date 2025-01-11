#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main() {
	int N;
	cin >> N;

	stack<int> stk;
	for (int i = 0; i < N; ++i) {
		string str;
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;
			stk.push(num);
		} else if (str == "top") {
			if (stk.empty())
				cout << "-1\n";
			else
				cout << stk.top() << "\n";
		} else if (str == "size") {
			cout << stk.size() << "\n";
		} else if (str == "empty") {
			cout << stk.empty() << "\n";
		} else if (str == "pop") {
			if (stk.empty())
				cout << "-1\n";
			else {
			cout << stk.top() << "\n";
			stk.pop();
			}
		}
	}
	return 0;
}