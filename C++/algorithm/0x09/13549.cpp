// #include <deque>
// #include <iostream>
// using namespace std;

// int dist[200002];
// int n, k;

// int main() {
//   ios::sync_with_stdio(0);
//   cin.tie(0);

//   cin >> n >> k;
//   int mx = 200002;
//   deque<int> q;
//   q.push_back(n);
//   dist[n] = 1;
//   while (!q.empty()) {
//     int cur = q.front();
//     q.pop_front();
//     if (cur * 2 < mx && dist[cur * 2] == 0) {
//       dist[cur * 2] = dist[cur];
//       q.push_front(cur * 2);
//     }
//     for (int nxt : {cur - 1, cur + 1}) {
//       if (nxt < 0 || nxt >= mx || dist[nxt] != 0) continue;
//       dist[nxt] = dist[cur] + 1;
//       q.push_back(nxt);
//     }
//   }
//   cout << dist[k] - 1;
// }

#include <iostream>
#include <queue>
using namespace std;

int dist[100001];
int n, k;
int mx = 100001;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;
  queue<int> q;
  dist[n] = 1;
  q.push(n);
  int tmp = n;
  while (tmp < mx && !dist[k]) {
    if (!dist[tmp]) {
      dist[tmp] = dist[n];
      q.push(tmp);
      if (tmp == k) return;
    }
    tmp *= 2;
  }
  while (!dist[k]) {
	int cur = q.front();
	q.pop();
	for (int nxt : {cur + 1, cur - 1}) {
		if (nxt < 0 || nxt >= mx) continue;
		if (dist[nxt]) continue;
		dist[nxt] = dist[cur] + 1;
		q.push(nxt);
		
	}
  }
}