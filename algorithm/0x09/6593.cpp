#include <cstring>
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int l, r, c;
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (1) {
    cin >> l >> r >> c;
    if (l == 0 && r == 0 && c == 0) break;

    queue<tuple<int, int, int>> q;
    char board[31][31][31];
    int visited[31][31][31];

    memset(visited, 0, sizeof(visited));

    for (int i = 0; i < l; ++i) {
      for (int j = 0; j < r; ++j) {
        for (int k = 0; k < c; ++k) {
          cin >> board[i][j][k];
          if (board[i][j][k] == 'S') {
            visited[i][j][k] = 1;
            q.push({i, j, k});
          }
        }
      }
    }

    bool isEscape = false;
    while (!q.empty() && !isEscape) {
      auto [z, x, y] = q.front();
      q.pop();
      for (int dir = 0; dir < 6; ++dir) {
        int nz = z + dz[dir];
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (nx < 0 || nx >= r || ny < 0 || ny >= c || nz < 0 || nz >= l)
          continue;
        if (board[nz][nx][ny] == '#' || visited[nz][nx][ny] > 0) continue;
        visited[nz][nx][ny] = visited[z][x][y] + 1;
        if (board[nz][nx][ny] == 'E') {
          cout << "Escaped in " << visited[nz][nx][ny] - 1 << " minute(s).\n";
          isEscape = true;
          break;
        }
        q.push({nz, nx, ny});
      }
    }
    if (!isEscape) cout << "Trapped!\n";
  }
  return 0;
}