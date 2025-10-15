#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	string s, p;
	map<string, string> map;
	while (n--) {
		cin >> s >> p;
		map[s] = p;
	}
	while (m--) {
		cin >> s;
		cout << map[s] << "\n";
	}
}