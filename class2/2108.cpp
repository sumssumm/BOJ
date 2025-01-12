#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> v(N);
	int nums[8001] = {0};
	double sum = 0;
	int num = 0;

	for (int i = 0; i < N; ++i) {
		cin >> v[i];
		sum += v[i];
		nums[v[i] + 4000]++;
		num = max(num, nums[v[i] + 4000]);
	}

	int mode = 0;
	bool second = false;
	for (int i = 0; i < 8001; ++i) {
		if (nums[i] == num) {
			if (!second) {
				mode = i - 4000;
				second = true;
			} else {
				mode = i - 4000;
				break;
			}
		}
	}
	sort(v.begin(), v.end());
	cout << (int)round(sum / v.size()) << "\n";
	cout << v[v.size()/2] << "\n";
	cout << mode << "\n";
	cout << v[v.size() - 1] - v[0] << "\n";
}