#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n * 2 - 1; ++i) {
		for (int j = 0; j < n * 2; ++j) {
			if (i < n) {
				if (j > i && j < n * 2 - i - 1)
					cout << " ";
				else
					cout << "*";
			 } 
			 else {
				if (j > n * 2 - i - 2 && j <= i)
					cout << " ";
				else
					cout << "*";
			}
		}
		cout << "\n";
	}
}
