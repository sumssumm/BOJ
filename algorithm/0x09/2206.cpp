#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, m;
char board[1001][1001];
int dist[1001][1001][2];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) cin >> board[i][j];
  queue<tuple<int, int, int> > q;
  bool flag = false;
  dist[0][0][0] = 1;
  q.push({0, 0, 0});
  while (!q.empty()) {
    auto [x, y, broken] = q.front();
    q.pop();
    if (x == n - 1 && y == m - 1) {
      cout << dist[x][y][broken];
      return 0;
    }
    for (int dir = 0; dir < 4; ++dir) {
      int nx = x + dx[dir];
      int ny = y + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (dist[nx][ny][broken] == 0 && board[nx][ny] == '0') {
        dist[nx][ny][broken] = dist[x][y][broken] + 1;
        q.push({nx, ny, broken});
      }
      if (broken == 0 && board[nx][ny] == '1') {
        dist[nx][ny][1] = dist[x][y][0] + 1;
        q.push({nx, ny, 1});
      }
    }
  }
  cout << "-1";
}