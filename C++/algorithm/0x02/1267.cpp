#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int y = 0;
	int m = 0;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		y += 10 * (num / 30 + 1);
		m += 15 * (num / 60 + 1);
	}
	if (y > m) 
		cout << "M " << m;
	else if (y < m)
		cout << "Y " << y;
	else
		cout << "Y M " << y;
}