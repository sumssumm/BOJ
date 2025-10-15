#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dist[200002];
int visited[200002];
vector<int> v;
int n, k;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  queue<int> q;
  dist[n] = 1;
  q.push(n);
  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    for (auto i : {cur - 1, cur + 1, cur * 2}) {
      if (i < 0 || i >= 200002 || dist[i]) continue;
      dist[i] = dist[cur] + 1;
      q.push(i);
      visited[i] = cur;
    }
  }
  cout << dist[k] - 1 << "\n";
  for (int i = k; i != n; i = visited[i]) v.push_back(i);
  v.push_back(n);
  for (int i = v.size() - 1; i >= 0; --i) cout << v[i] << ' ';
}