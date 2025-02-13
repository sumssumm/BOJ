#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int board[101][101];
int dist[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int m, n, k;
queue<pair<int, int> > q;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> m >> n >> k;
  while (k--) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = y1; i < y2; ++i)
      for (int j = x1; j < x2; ++j) board[i][j] = 1;
  }
  int cnt = 0;
  vector<int> area;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (board[i][j] == 1 || dist[i][j] == 1) continue;
      cnt++;
      dist[i][j] = 1;
      q.push({i, j});
      int w = 1;
      while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; ++dir) {
          int nx = cur.first + dx[dir];
          int ny = cur.second + dy[dir];
          if (nx < 0 || nx >= m || ny < 0 || ny >= n || dist[nx][ny] != 0 ||
              board[nx][ny] == 1)
            continue;
          dist[nx][ny] = 1;
          q.push({nx, ny});
          w++;
        }
      }
      area.push_back(w);
    }
  }
  sort(area.begin(), area.end());
  cout << cnt << "\n";
  for (int i : area) cout << i << " ";
  return 0;
}