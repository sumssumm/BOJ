#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;

	unordered_map<int, string> ntos;
	unordered_map<string, int> ston;

	for (int i = 0; i < N; ++i) {
		string str;
		cin >> str;
		ntos[i] = str;
		ston[str] = i;
	}

	while (M--) {
		string str;
		cin >> str;
		int num = 0;
		if (!isalpha(str[0])) {
			num = stoi(str) - 1;
			cout << ntos[num] << "\n";
		} else {
			cout << ston[str] + 1 << "\n";
		}

	}
}