#include <iostream>
#include <stack>
using namespace std;

int main() {
	int K;
	cin >> K;

	stack<int> stk;
	for (int i = 0; i < K; ++i) {
		int num;
		cin >> num;
		if (num == 0)
			stk.pop();
		else
			stk.push(num);
	}
	int sum = 0;
	while (!stk.empty()) {
		sum += stk.top();
		stk.pop();
	}
	cout << sum << "\n";
	return 0;
}