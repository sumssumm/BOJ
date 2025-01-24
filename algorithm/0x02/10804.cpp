#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v(21);
	for (int i = 1; i < 21; ++i)
		v[i] = i;
	
	for (int i = 0; i < 10; ++i) {
		int a, b;
		cin >> a >> b;
		reverse(v.begin() + a, v.begin() + b + 1);
	}
	for (int i = 1; i < 21; ++i)
		cout << v[i] << " ";
}