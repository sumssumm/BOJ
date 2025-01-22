// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
// 	string str;
// 	cin >> str;
// 	int arr[26] = {0};

// 	for (int i = 0; i < str.length(); ++i) {
// 		arr[str[i] - 97]++;
// 	}
// 	for (int i = 0; i < 26; ++i) {
// 		cout << arr[i] << " ";
// 	}
// }

#include <iostream>
#include <string>
using namespace std;

int arr[26];

int main() {
	string str;
	cin >> str;

	for (char c : str)
		arr[c - 97]++;
	for (int i : arr)
		cout << i << " ";
}