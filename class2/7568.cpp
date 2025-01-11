#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<pair<int, int> > a(N);
	for (int i = 0; i < N; ++i)
		cin >> a[i].first >> a[i].second;

	for (int i = 0; i < N; ++i) {
		int rank = 1;
		for (int j = 0; j < N; ++j) {
			if (a[i].first < a[j].first && a[i].second < a[j].second){
				rank++;
			}
		}
		cout << rank << "\n";
	}

}