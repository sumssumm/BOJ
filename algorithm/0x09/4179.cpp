#include <iostream>
#include <queue>
#include <string>
using namespace std;

string board[1002];
int dist[1002][1002];
int fire[1002][1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int r, c;
  cin >> r >> c;
  for (int i = 0; i < r; ++i) cin >> board[i];
  for (int i = 0; i < r; ++i) {
    fill(dist[i], dist[i] + c, -1);
    fill(fire[i], fire[i] + c, -1);
  }
  queue<pair<int, int> > q_fire;
  queue<pair<int, int> > q_time;
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      if (board[i][j] == 'F') {
        q_fire.push({i, j});
        fire[i][j] = 0;
      }
      if (board[i][j] == 'J') {
        q_time.push({i, j});
        dist[i][j] = 0;
      }
    }
  }
  while (!q_fire.empty()) {
    auto cur = q_fire.front();
    q_fire.pop();
    for (int dir = 0; dir < 4; ++dir) {
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
      if (board[nx][ny] == '#' || fire[nx][ny] >= 0) continue;
      fire[nx][ny] = fire[cur.first][cur.second] + 1;
      q_fire.push({nx, ny});
    }
  }
  while (!q_time.empty()) {
    auto cur = q_time.front();
    q_time.pop();
    for (int dir = 0; dir < 4; ++dir) {
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
        cout << dist[cur.first][cur.second] + 1;
        return 0;
      }
      if (board[nx][ny] == '#' || dist[nx][ny] >= 0) continue;
      if (fire[nx][ny] != -1 && fire[nx][ny] <= dist[cur.first][cur.second] + 1)
        continue;
      dist[nx][ny] = dist[cur.first][cur.second] + 1;
      q_time.push({nx, ny});
    }
  }
  cout << "IMPOSSIBLE";
}
