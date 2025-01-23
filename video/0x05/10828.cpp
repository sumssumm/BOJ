#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	stack<int> stack;
	while (n--) {
		string str;
		cin >> str;
		if (str == "push") {
			int num;
			cin >> num;
			stack.push(num);
		} else if (str == "pop") {
			if (!stack.empty()) {
				cout << stack.top() << "\n";
				stack.pop();
			} else
				cout << "-1\n";
		} else if (str == "size") {
			cout << stack.size() << "\n";
		} else if (str == "empty") {
			if (stack.empty())
				cout << "1\n";
			else
				cout << "0\n";
		} else if (str == "top") {
			if (!stack.empty()) 
				cout << stack.top() << "\n";
			else
				cout << "-1\n";
		}
	}
}