#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i) {
		string str;
		cin >> str;

		bool flag = true;
		stack<char> st;
		for (char c : str) {
			if (c == '(')
				st.push(c);
			else {
				if (st.empty()) {
					flag = false;
					break;
				}
				st.pop();
			}
		}
		if (st.empty() && flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}