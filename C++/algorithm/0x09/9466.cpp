#include <iostream>
#include <queue>
using namespace std;

int t, n;
int student[100002];
int visited[100002];

void run(int x) {
  int cur = x;
  while (1) {
    visited[cur] = x;
    cur = student[cur];
    if (visited[cur] == x) {
      while (visited[cur] != -1) {
        visited[cur] = -1;
        cur = student[cur];
      }
      return;
    } else if (visited[cur] != 0)
      return;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> t;
  while (t--) {
    cin >> n;
    fill(visited + 1, visited + n + 1, 0);
    for (int i = 1; i <= n; ++i) cin >> student[i];
    for (int i = 1; i <= n; ++i)
      if (visited[i] == 0) run(i);
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
      if (visited[i] != -1) cnt++;
    cout << cnt << "\n";
  }
}