#include <iostream>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie();
	int n, k;
	cin >> n >> k;

	list<int> l;
	for (int i = 1; i <= n; ++i)
		l.push_back(i);
	
	auto it = l.begin();
	cout << "<";
	while (!l.empty()) {
		for (int i = 0; i < k; ++i) {
			if (it == l.end())
				it = l.begin();
			++it;
		}
		--it;
		if (l.size() != 1)
			cout << *it << ", ";
		else
			cout << *it;
		it = l.erase(it);
	}
	cout << ">";
}