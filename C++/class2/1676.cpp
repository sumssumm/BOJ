#include <iostream>
using namespace std;

int main() {
	int N, fivecnt = 0;
	cin >> N;

	for (int i = 0; i < N; ++i) {
		int num = N - i;
		while (num % 5 == 0) {
			fivecnt++;
			num /= 5;
		}

	}
	cout << fivecnt << "\n";
}