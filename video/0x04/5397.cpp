#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	while (n--) {
		string str;
		cin >> str;

		list<char> l;
		
		auto it = l.begin();
		for (char c: str) {
			if (c == '<') {
				if (it != l.begin())
					--it;
			}
			else if (c == '>') {
				if (it != l.end())
					it++;
			}
			else if (c == '-') {
				if (it != l.begin()) {
					--it;
					it = l.erase(it);
				}
			} else
				l.insert(it, c);
		}
		for (auto c : l)
			cout << c; 
		cout << "\n";
	}

}