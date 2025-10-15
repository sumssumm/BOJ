#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

string board[102];
int visited[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n;

void bfs(int i, int j, bool flag) {
  queue<pair<int, int> > q;
  visited[i][j] = 1;
  q.push({i, j});
  while (!q.empty()) {
    auto cur = q.front();
    q.pop();
    for (int dir = 0; dir < 4; ++dir) {
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
      if (visited[nx][ny] != 0) continue;
      if (flag && (board[i][j] == board[nx][ny] ||
                   (board[i][j] != 'B' && board[nx][ny] != 'B'))) {
        visited[nx][ny] = 1;
        q.push({nx, ny});
      } else {
        if (board[i][j] == board[nx][ny]) {
          visited[nx][ny] = 1;
          q.push({nx, ny});
        }
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> board[i];
  }
  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (visited[i][j] != 0) continue;
      cnt1++;
      bfs(i, j, 0);
    }
  }
  memset(visited, 0, sizeof(visited));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (visited[i][j] != 0) continue;
      cnt2++;
      bfs(i, j, 1);
    }
  }
  cout << cnt1 << " " << cnt2;
}