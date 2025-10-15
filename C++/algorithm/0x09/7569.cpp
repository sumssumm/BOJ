#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int board[103][103][103];
int visited[103][103][103];
int dx[6] = {0, 0, 1, -1, 0, 0};
int dy[6] = {1, -1, 0, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
queue<tuple<int, int, int>> q;
int m, n, h;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> m >> n >> h;
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < m; ++k) {
        int tmp;
        cin >> tmp;
        board[i][j][k] = tmp;
        if (tmp == 1) q.push({i, j, k});
        if (tmp == 0) visited[i][j][k] = -1;
      }
    }
  }
  while (!q.empty()) {
    auto cur = q.front();
    q.pop();
    int curX, curY, curZ;
    tie(curZ, curX, curY) = cur;
    for (int dir = 0; dir < 6; ++dir) {
      int nx = curX + dx[dir];
      int ny = curY + dy[dir];
      int nz = curZ + dz[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h) continue;
      if (visited[nz][nx][ny] >= 0) continue;
      visited[nz][nx][ny] = visited[curZ][curX][curY] + 1;
      q.push({nz, nx, ny});
    }
  }
  int cnt = 0;
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < m; ++k) {
        if (visited[i][j][k] == -1) {
          cout << "-1\n";
          return 0;
        }
        cnt = max(cnt, visited[i][j][k]);
      }
    }
  }
  cout << cnt;
}