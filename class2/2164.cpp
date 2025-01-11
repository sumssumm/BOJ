#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N;
	cin >> N;

	queue<int> a;
	for (int i = 1 ; i <= N; ++i) 
		a.push(i);
	
	while (a.size() > 0) {
		if (a.size() == 1)
			cout << a.front() << "\n";
		a.pop();
		int i = a.front();
		a.pop();
		a.push(i);
	}
	return 0;
}