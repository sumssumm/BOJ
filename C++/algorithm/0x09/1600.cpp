#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int board[201][201];
int dist[201][201][31];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int hx[8] = {1, 1, -2, -2, 2, 2, -1, -1};
int hy[8] = {-2, 2, 1, -1, -1, 1, -2, 2};
int k, w, h;

int bfs() {
  queue<tuple<int, int, int, int> > q;
  dist[0][0][0] = 1;
  q.push({0, 0, 0, 0});
  while (!q.empty()) {
    auto [x, y, z, cnt] = q.front();
    q.pop();
    if (x == h - 1 && y == w - 1) return cnt;
    if (z < k) {
      for (int dir = 0; dir < 8; ++dir) {
        int nx = x + hx[dir];
        int ny = y + hy[dir];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w || dist[nx][ny][z + 1] ||
            board[nx][ny])
          continue;
        dist[nx][ny][z + 1] = 1;
        q.push({nx, ny, z + 1, cnt + 1});
      }
    }
    for (int dir = 0; dir < 4; ++dir) {
      int nx = x + dx[dir];
      int ny = y + dy[dir];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w || board[nx][ny] ||
          dist[nx][ny][z])
        continue;
      dist[nx][ny][z] = 1;
      q.push({nx, ny, z, cnt + 1});
    }
  }
  return -1;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> k >> w >> h;
  for (int i = 0; i < h; ++i)
    for (int j = 0; j < w; ++j) cin >> board[i][j];
  cout << bfs();
  return 0;
}
