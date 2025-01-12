#include <iostream>
#include <queue>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        queue<pair<int, int> > q;
        priority_queue<int> pq;
        
        for (int i = 0; i < N; ++i) {
            int num;
            cin >> num;
            q.push({num, i});
            pq.push(num);
        }
        
        int cnt = 0;
        while (!q.empty()) {
            int cur_num = q.front().first;
            int cur_i = q.front().second;
            q.pop();
            
            if (cur_num == pq.top()) {
                pq.pop();
                cnt++;
                if (cur_i == M) {
                    cout << cnt << endl;
                    break;
                }
            } else {
                q.push({cur_num, cur_i});
            }
        }
    }
    return 0;
}
