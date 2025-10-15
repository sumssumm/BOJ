#include <iostream>
using namespace std;

int main() {
	int cnt = 0;
	int n;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j) {
			cin >> n;
			if (n == 1)
				cnt++;
		}
		if (cnt == 1)
			cout << "C\n";
		else if (cnt == 2)
			cout << "B\n";
		else if (cnt == 3)
			cout << "A\n";
		else if (cnt == 4)
			cout << "D\n";
		else if (cnt == 0)
			cout << "E\n";
		cnt = 0;
	}
}