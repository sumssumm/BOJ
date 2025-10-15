#include <iostream>
#include <queue>
#include <string>
using namespace std;

string board[1002];
int fire[1002][1002];
int dist[1002][1002];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int t, w, h;

void bfs() {
  cin >> w >> h;
  for (int i = 0; i < h; ++i) {
    cin >> board[i];
    fill(dist[i], dist[i] + w, -1);
    fill(fire[i], fire[i] + w, -1);
  }
  queue<pair<int, int> > q_fire;
  queue<pair<int, int> > q_dist;
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (board[i][j] == '*') {
        q_fire.push({i, j});
        fire[i][j] = 0;
      }
      if (board[i][j] == '@') {
        q_dist.push({i, j});
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
      if (nx < 0 || nx >= h || ny < 0 || ny >= w || fire[nx][ny] >= 0 ||
          board[nx][ny] == '#')
        continue;
      fire[nx][ny] = fire[cur.first][cur.second] + 1;
      q_fire.push({nx, ny});
    }
  }
  while (!q_dist.empty()) {
    auto cur = q_dist.front();
    q_dist.pop();
    for (int dir = 0; dir < 4; ++dir) {
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
        cout << dist[cur.first][cur.second] + 1 << "\n";
        return;
      }
      if (board[nx][ny] == '#' || dist[nx][ny] >= 0) continue;
      if (fire[nx][ny] != -1 && fire[nx][ny] <= dist[cur.first][cur.second] + 1)
        continue;
      dist[nx][ny] = dist[cur.first][cur.second] + 1;
      q_dist.push({nx, ny});
    }
  }
  cout << "IMPOSSIBLE\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> t;
  while (t--) {
    bfs();
  }
}