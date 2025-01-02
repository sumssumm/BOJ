#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	multimap<int, string> a;
	for (int i = 0; i < N; ++i) {
		string  name;
		int age;
		cin >> age >> name;
		a.insert(make_pair(age, name));
	}
	for (auto it = a.begin(); it != a.end(); ++it)
	{
		cout << it->first << " " << it->second << "\n";
	}
}