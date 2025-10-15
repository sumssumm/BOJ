#include <iostream>
#include <queue>
using namespace std;

int visited[1000002];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int f, s, g, u, d;
  cin >> f >> s >> g >> u >> d;

  queue<int> q;
  visited[s] = 1;
  q.push(s);
  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    for (auto nxt : {cur - d, cur + u}) {
      if (nxt < 1 || nxt > f || visited[nxt] != 0) continue;
      visited[nxt] = visited[cur] + 1;
      q.push(nxt);
    }
  }
  if (visited[g] == 0)
    cout << "use the stairs\n";
  else
    cout << visited[g] - 1 << "\n";
  return 0;
}