#include <iostream>
using namespace std;

int func2(int arr[], int N) {
	int num[101] = {0};
	for (int i = 0; i < N; ++i) {
		if (num[100 - arr[i]] == 1)
			return 1;
		num[arr[i]] = 1;
	}
	return 0;
}

int main() {
	int arr1[] = {1, 52, 48};
    int arr2[] = {50, 42};
    int arr3[] = {4, 13, 63, 87};
	cout << func2(arr1, 3) << "\n";
    cout << func2(arr2, 2) << "\n";
    cout << func2(arr3, 4) << "\n";
}