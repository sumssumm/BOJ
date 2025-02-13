#include <climits>
#include <iostream>
#include <queue>
using namespace std;

int board[101][101];
bool vis[101][101];
int dist[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, cnt = INT_MAX;

void bfs() {
  int idx = 1;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (vis[i][j] || board[i][j] == 0) continue;
      queue<pair<int, int> > q;
      vis[i][j] = true;
      q.push({i, j});
      while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        board[cur.first][cur.second] = idx;
        for (int dir = 0; dir < 4; ++dir) {
          int nx = cur.first + dx[dir];
          int ny = cur.second + dy[dir];
          if (nx < 0 || nx >= n || ny < 0 || ny >= n || vis[nx][ny] ||
              board[nx][ny] == 0)
            continue;
          vis[nx][ny] = true;
          q.push({nx, ny});
        }
      }
      idx++;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j) cin >> board[i][j];
  bfs();
  for (int i = 0; i < n; i++) fill(dist[i], dist[i] + n, -1);
  queue<pair<int, int> > q;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (board[i][j] != 0) {
        dist[i][j] = 0;
        q.push({i, j});
      }
    }
  }
  while (!q.empty()) {
    auto cur = q.front();
    q.pop();
    for (int dir = 0; dir < 4; ++dir) {
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= n ||
          board[nx][ny] == board[cur.first][cur.second])
        continue;
      if (board[nx][ny] != 0) {
        cnt = min(cnt, dist[nx][ny] + dist[cur.first][cur.second]);
      } else {
        board[nx][ny] = board[cur.first][cur.second];
        dist[nx][ny] = dist[cur.first][cur.second] + 1;
        q.push({nx, ny});
      }
    }
  }
  cout << cnt;
}