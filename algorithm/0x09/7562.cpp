#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

int dist[305][305];
int dx[8] = {2, 2, -1, 1, -2, -2, -1, 1};
int dy[8] = {1, -1, 2, 2, 1, -1, -2, -2};
int t, l, x, y, a, b;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  while (t--) {
    cin >> l >> x >> y >> a >> b;
    for (int i = 0; i < l; ++i) fill(dist[i], dist[i] + l, -1);
    queue<pair<int, int> > q;

    dist[x][y] = 0;
    q.push({x, y});

    while (!q.empty()) {
      auto cur = q.front();
      q.pop();
      if (cur.first == a && cur.second == b) {
        cout << dist[cur.first][cur.second] << "\n";
        break;
      }
      for (int dir = 0; dir < 8; ++dir) {
        int nx = cur.first + dx[dir];
        int ny = cur.second + dy[dir];
        if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
        if (dist[nx][ny] >= 0) continue;
        dist[nx][ny] = dist[cur.first][cur.second] + 1;
        q.push({nx, ny});
      }
    }
  }
}