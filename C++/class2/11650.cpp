#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
	int x, y;
};

bool compare (const Point &a, const Point &b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main() {
	int N;
	cin >> N;

	vector<Point> a(N);
	for (int i = 0; i < N; ++i) {
		cin >> a[i].x >> a[i].y;
	}
	sort(a.begin(), a.end(), compare);
	for (const auto &p: a) 
		cout << p.x << " " << p.y << "\n";
	return 0;
}