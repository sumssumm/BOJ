#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int start = 666;
	int cnt = 0;

	while (1) {
		if (to_string(start).find("666") != string::npos)
			++cnt;
		if (cnt == n) {
			cout << start << endl;
			return 0;
		}
		++start;
	}
	return 0;
}
