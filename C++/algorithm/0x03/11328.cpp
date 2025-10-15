#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		bool flag = true;
		int arr[26] = {0};
		string str1, str2;
		cin >> str1 >> str2;
		 if (str1.length() != str2.length()) {
            cout << "Impossible\n";
            continue;
        }
		for (int i = 0; i < str1.length(); ++i)
			arr[str1[i] - 97]++;
		for (int j = 0; j < str2.length(); ++j) {
			if (--arr[str2[j] - 97] < 0) {
				flag = false;
				break ;
			}
		}
		if (flag)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
	}
}