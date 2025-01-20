// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);
// 	int n;
// 	cin >> n;

// 	vector<int> v(n);
// 	for (int i = 0; i < n; ++i)
// 		cin >> v[i];
// 	int sum;
// 	cin >> sum;
// 	int cnt = 0;
// 	sort(v.begin(), v.end());
// 	int start = 0, end = n - 1;
// 	while (start < end) {
// 		if (v[start] + v[end] == sum)
// 			cnt++;
// 		if (v[start] + v[end] < sum)
// 			start++;
// 		else
// 			end--;
// 	}
// 	cout << cnt;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cin >> x;

    sort(arr.begin(), arr.end());
    int start = 0, end = n - 1;
    int count = 0;

    while (start < end) {
        int sum = arr[start] + arr[end];
        if (sum == x) {
            count++;
            start++;
            end--;
        } else if (sum < x)
            start++;
        else
            end--;
    }

    cout << count << "\n";
    return 0;
}
