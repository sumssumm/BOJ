#include <iostream>
#include <queue>
using namespace std;

int board[102][102];
int visited[102][102];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, maxcnt, maxlimit;

void bfs(int i, int j, int limit) {
  queue<pair<int, int> > q;
  visited[i][j] = 1;
  q.push({i, j});
  while (!q.empty()) {
    auto cur = q.front();
    q.pop();
    for (int dir = 0; dir < 4; ++dir) {
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= n || visited[nx][ny] != 0 ||
          board[nx][ny] <= limit)
        continue;
      visited[nx][ny] = 1;
      q.push({nx, ny});
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> board[i][j];
      maxlimit = max(board[i][j], maxlimit);
    }
  }

  for (int limit = 0; limit <= maxlimit; ++limit) {
    for (int i = 0; i < n; ++i) fill(visited[i], visited[i] + n, 0);
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (visited[i][j] != 0 || board[i][j] <= limit) continue;
        bfs(i, j, limit);
        cnt++;
      }
    }
    maxcnt = max(cnt, maxcnt);
  }
  cout << maxcnt;
  return 0;
}