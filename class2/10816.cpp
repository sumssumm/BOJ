#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, M;
	cin >> N;

	unordered_map<int, int> cards;
	for (int i = 0; i < N; ++i){
		int num;
		cin >> num;
		cards[num]++;
	}

	cin >> M;
	vector<int> cnt(M);
	for (int i = 0; i < M; ++i) {
		int num;
		cin >> num;
		cnt[i] = cards[num];
	}

	for (int i : cnt) {
		cout << i << " ";
	}
	return 0;
}