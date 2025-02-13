#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

int board[52][52];
int dist[52][52];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int m, n, k;

void bfs(int i, int j) {
  queue<pair<int, int> > q;
  dist[i][j] = 1;
  q.push({i, j});
  while (!q.empty()) {
    auto cur = q.front();
    q.pop();
    for (int dir = 0; dir < 4; ++dir) {
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (board[nx][ny] == 0 || dist[nx][ny] != 0) continue;
      dist[nx][ny] = 1;
      q.push({nx, ny});
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    cin >> m >> n >> k;
    memset(board, 0, sizeof(board));
    memset(dist, 0, sizeof(dist));
    while (k--) {
      int x, y;
      cin >> x >> y;
      board[y][x] = 1;
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (board[i][j] == 0 || dist[i][j] == 1) continue;
        cnt++;
        bfs(i, j);
      }
    }
    cout << cnt << "\n";
  }
}