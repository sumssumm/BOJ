#include <iostream>
#include <string>
#include <array>

int main() {
	long a = 0, b = 0, c = 0;
	std::cin >> a >> b >> c;
	if (a < 100 || a > 1000 || b < 100 || b > 1000 || c < 100 || c > 1000) return 1;

	std::string res = std::to_string(a * b * c);
	std::array<int, 10> count_digit = {0};

	for (char ch : res) 
		count_digit[ch - '0']++;
	for (int cnt : count_digit)
		std::cout << cnt << std::endl;
	return 0;
}