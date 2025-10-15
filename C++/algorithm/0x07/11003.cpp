#include <algorithm>
#include <deque>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, l;
  cin >> n >> l;
  deque<pair<int, int> > d;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    while (!d.empty() && d.back().second >= x) d.pop_back();
    d.emplace_back(i, x);
    if (d.front().first <= i - l) d.pop_front();
    cout << d.front().second << " ";
  }
}
