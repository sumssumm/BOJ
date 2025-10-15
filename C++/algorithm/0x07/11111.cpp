
#include <deque>
#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, l;

  cin >> n >> l;

  priority_queue<int, vector<int>, greater<int>> min;
  deque<int> dq;
  unordered_map<int, int> umap;

  for (int i = 0; i < n; ++i) {
    int num;

    cin >> num;
    min.push(num);
    dq.push_back(num);

    if (dq.size() > l) {
      int tmp = dq.front();
      dq.pop_front();
      umap[tmp] = 1;

      if (tmp == min.top()) min.pop();
      while (!min.empty() && umap[min.top()]) {
        umap[min.top()] = 0;
        min.pop();
      }
    }

    cout << min.top() << ' ';
  }
}