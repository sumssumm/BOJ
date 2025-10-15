#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main() {
	int M, N;
	cin >> M >> N;

	for (int i = M; i <= N; ++i) {
		if (i != 1 && isPrime(i))
			cout << i << "\n";
	}
	return 0;
}