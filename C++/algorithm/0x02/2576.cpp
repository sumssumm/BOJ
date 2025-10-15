#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
	vector<int> v(7);
	int sum = 0, min = numeric_limits<int>::max();
	for (int i = 0; i < 7; ++i) {
		cin >> v[i];
		if (v[i] % 2 == 1) {
			sum += v[i];
			if (min > v[i])
			min = v[i];
		}
	}
	if (sum)
		cout << sum << "\n" << min;
	else
		cout << "-1";
}