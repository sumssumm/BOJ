// #include <iostream>
// #include <queue>
// using namespace std;

// int board[303][303];
// int vis[303][303];
// int dx[4] = {1, -1, 0, 0};
// int dy[4] = {0, 0, 1, -1};
// int n, m, year;

// void melting() {
//   int zero[303][303] = {0};
//   for (int i = 0; i < n; ++i) {
//     for (int j = 0; j < m; ++j) {
//       if (board[i][j] == 0) continue;
//       for (int dir = 0; dir < 4; ++dir) {
//         int nx = i + dx[dir];
//         int ny = j + dy[dir];
//         if (nx >= 0 && nx < n && ny >= 0 && ny < m && board[nx][ny] == 0)
//           zero[i][j]++;
//       }
//     }
//   }
//   for (int i = 0; i < n; ++i)
//     for (int j = 0; j < m; ++j) board[i][j] = max(0, board[i][j] -
//     zero[i][j]);
// }

// int status() {
//   int x = -1, y = -1;
//   int cnt1 = 0;
//   for (int i = 0; i < n; ++i) {
//     for (int j = 0; j < m; ++j) {
//       if (board[i][j]) {
//         x = i;
//         y = j;
//         cnt1++;
//       }
//     }
//   }
//   if (cnt1 == 0) return 0;
//   int cnt2 = 0;
//   queue<pair<int, int> > q;
//   vis[x][y] = 1;
//   q.push({x, y});
//   while (!q.empty()) {
//     auto cur = q.front();
//     q.pop();
//     cnt2++;
//     for (int dir = 0; dir < 4; ++dir) {
//       int nx = cur.first + dx[dir];
//       int ny = cur.second + dy[dir];
//       if (nx < 0 || nx >= n || ny < 0 || ny >= m || vis[nx][ny] == 1 ||
//           board[nx][ny] <= 0)
//         continue;
//       vis[nx][ny] = 1;
//       q.push({nx, ny});
//     }
//   }
//   if (cnt1 == cnt2) return 1;
//   return 2;
// }

// int main() {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cin >> n >> m;
//   for (int i = 0; i < n; ++i)
//     for (int j = 0; j < m; ++j) cin >> board[i][j];

//   while (true) {
//     year++;
//     melting();
//     for (int i = 0; i < n; ++i) fill(vis[i], vis[i] + m, 0);
//     int check = status();
//     if (check == 0) {
//       cout << 0;
//       return 0;
//     } else if (check == 1)
//       continue;
//     else {
//       cout << year;
//       return 0;
//     }
//   }
// }

#include <iostream>
#include <queue>
using namespace std;

int board[303][303];
int vis[303][303];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, m, year;

void bfs(int i, int j) {
  queue<pair<int, int>> q;
  vis[i][j] = 1;
  q.push({i, j});
  while (!q.empty()) {
    auto cur = q.front();
    q.pop();
    for (int dir = 0; dir < 4; ++dir) {
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m || vis[nx][ny] != 0) continue;
      if (board[nx][ny] == 0) {
        if (board[cur.first][cur.second] > 0) board[cur.first][cur.second]--;
      } else {
        vis[nx][ny] = 1;
        q.push({nx, ny});
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) cin >> board[i][j];

  while (true) {
    int chk = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (board[i][j]) {
          chk = 1;
          break;
        }
      }
      if (chk == 1) break;
    }
    if (chk == 0) {
      cout << 0;
      return 0;
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (board[i][j] == 0 || vis[i][j] != 0) continue;
        if (cnt == 0) {
          cnt++;
          bfs(i, j);
        } else {
          cout << year;
          return 0;
        }
      }
    }
    for (int i = 0; i < n; ++i) fill(vis[i], vis[i] + m, 0);
    cnt = 0, chk = 0;
    year++;
  }
  return 0;
}