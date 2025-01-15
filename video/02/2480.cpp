#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << a * 1000 + 10000;
	else if (a == b || b == c || a == c)
	{
		if (a == b)
			cout << a * 100 + 1000;
		else
			cout << c * 100 + 1000;
	}
	else
	{
		if (a > b && a > c)
			cout << a * 100;
		else if (b > a && b > c)
			cout << b * 100;
		else
			cout << c * 100;
	}
}