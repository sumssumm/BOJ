#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str;

	while (getline(cin, str, '.')) {
		if (str.size() == 1)
			break ;
		bool flag = true;
		stack<char> stk;
		for (char c : str) {
			if (c == '(' || c == '[')
				stk.push(c);
			else if (c == ')') {
				if (stk.empty() || stk.top() != '(') {
					flag = false;
					break;
				}
				stk.pop();
			} else if (c == ']') {
				if (stk.empty() || stk.top() != '[') {
					flag = false;
					break;
				}
				stk.pop();
			}
		}
		if (flag && stk.empty())
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}