#include <iostream>
#include <string>
using namespace std;

int main() {
	int arr[10] = {0};

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); ++i)
		arr[str[i] - 48]++;

	arr[6] = (arr[6] + arr[9] + 1) / 2;
	arr[9] = 0;
	int max = 0;
	for (int i : arr) {
		if (max < i)
			max = i;
	}
	cout << max;
}