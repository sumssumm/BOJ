#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int M;
	cin >> M;

	int bitmask = 0;
	while(M--) {
		string str;
		cin >> str;
		int num;
		if (str != "all" && str != "empty")
			cin >> num;
		if (str == "add")
			bitmask |= (1 << (num - 1)); 
		else if (str == "remove")
			bitmask &= ~(1 << (num - 1));
		else if (str == "check") {
			if (bitmask & (1 << (num - 1)))
				cout << "1\n";
			else
				cout << "0\n";
		} else if (str == "toggle") 
			bitmask ^= (1 << (num - 1));
		else if (str == "all")
			bitmask = (1 << 20) - 1;
		else if (str == "empty")
			bitmask = 0;
	}
}