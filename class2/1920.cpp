#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; ++i)
		cin >> a[i];

	sort(a.begin(), a.end());

	int M;
	cin >> M;
	vector<int> b(M);
	for (int i = 0; i < M; ++i)
		cin >> b[i];
	
	for (int i = 0; i < M; ++i) {
		if (binary_search(a.begin(), a.end(), b[i]))
			cout << "1\n";
		else	
			cout << "0\n";
	}
	return 0;
}