#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

string board[26];
int visited[26][26];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  int cnt = 0;
  vector<int> ans;
  for (int i = 0; i < n; ++i) {
    cin >> board[i];
  }
  queue<pair<int, int> > q;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (board[i][j] != '1' || visited[i][j] != 0) continue;
      cnt++;
      visited[i][j] = 1;
      q.push({i, j});
      int w = 1;
      while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; ++dir) {
          int nx = cur.first + dx[dir];
          int ny = cur.second + dy[dir];
          if (nx < 0 || nx >= n || ny < 0 || ny >= n || board[nx][ny] == '0' ||
              visited[nx][ny] != 0)
            continue;
          visited[nx][ny] = 1;
          q.push({nx, ny});
          w++;
        }
      }
      ans.push_back(w);
    }
  }
  sort(ans.begin(), ans.end());
  cout << cnt << "\n";
  for (int i : ans) cout << i << "\n";
}